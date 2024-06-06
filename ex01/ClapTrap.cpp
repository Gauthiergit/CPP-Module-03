/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:56:05 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 12:27:47 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name(""), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << GREEN << "ClapTrap deployed" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << GREEN << "ClapTrap " << YELLOW << Name << GREEN << " deployed" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << GREEN << "Copy ClapTrap of " << YELLOW << copy._Name << GREEN << " deployed" << RESET << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "ClapTrap " << YELLOW << this->_Name << GREEN << " destroyed" << RESET << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &change)
{
	this->_Name = change._Name;
	this->_HitPoint = change._HitPoint;
	this->_EnergyPoint = change._EnergyPoint;
	this->_AttackDamage = change._AttackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoint > 0)
	{
		if (this->_AttackDamage <= this->_HitPoint)
		{
			this->_EnergyPoint--;
			std::cout << BLUE << "ClapTrap " << YELLOW << this->_Name << BLUE << " attacks " << YELLOW << target <<
				RED << ", causing " << this->_AttackDamage << " points of damage !" << RESET << std::endl;
		}
		else
			std::cout << BLUE << "ClapTrap " << YELLOW << this->_Name << BLUE << " try to attack but "
				RED << "there is not enough Hit point" << RESET << std::endl;
		std::cout << BLUE << "Energy point: " << this->_EnergyPoint << RESET << std::endl;
	}
	else
		std::cout << RED << "No more Energy point\nEnergy point: " << this->_EnergyPoint << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoint > 0 && amount <= (unsigned int)_HitPoint)
		this->_HitPoint -= amount;
	if (this->_HitPoint <= 0)
		std::cout << RED << "Hit point: " << this->_HitPoint << RESET << std::endl;
	else
		std::cout << BLUE << "Hit point: " << this->_HitPoint << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoint > 0)
	{
		this->_HitPoint += amount;
		this->_EnergyPoint--;
		std::cout << BLUE << "ClapTrap " << YELLOW << this->_Name << GREEN << " be repaired and regains " <<
			amount << " points of hit !" << RESET << std::endl;
		std::cout << BLUE << "Hit point: " << this->_HitPoint << RESET << std::endl;
	}
	else
		std::cout << RED << "No more Energy point" << RESET << std::endl;
	std::cout << BLUE << "Energy point: " << this->_EnergyPoint << RESET << std::endl;
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_AttackDamage);
}

void	ClapTrap::setAttackDamage(int damage)
{
	this->_AttackDamage = damage;
}