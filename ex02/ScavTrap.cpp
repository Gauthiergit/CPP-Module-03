/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:13:04 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 17:32:26 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << GREEN << "ScavTrap deployed" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << GREEN << "ScavTrap " << YELLOW << this->_Name << GREEN << " deployed" << RESET << std::endl;
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &change)
{
	this->_Name = change._Name;
	this->_HitPoint = change._HitPoint;
	this->_EnergyPoint = change._EnergyPoint;
	this->_AttackDamage = change._AttackDamage;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << GREEN << "Copy ScavTrap of " << YELLOW << copy._Name << GREEN << " deployed" << RESET << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "ScavTrap " << YELLOW << this->_Name << GREEN << " destroyed" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_EnergyPoint > 0)
	{
		if (this->_AttackDamage <= this->_HitPoint)
		{
			this->_EnergyPoint--;
			std::cout << BLUE << "ScavTrap " << YELLOW << this->_Name << BLUE << " attacks " << YELLOW << target <<
				RED << ", causing " << this->_AttackDamage << " points of damage !" << RESET << std::endl;
		}
		else
			std::cout << BLUE << "ScavTrap " << YELLOW << this->_Name << BLUE << " try to attack but "
				RED << "there is not enough Hit point" << RESET << std::endl;
		std::cout << BLUE << "Energy point: " << this->_EnergyPoint << RESET << std::endl;
	}
	else
		std::cout << RED << "No more Energy point\nEnergy point: " << this->_EnergyPoint << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << GREEN << "ScavTrap is now in Gate keeper mode !!" << RESET << std::endl;
}