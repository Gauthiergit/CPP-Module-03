/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:56:05 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/05 12:13:51 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name(""), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Constructor by copy called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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
		this->_EnergyPoint--;
		std::cout << "ClapTrap " << this->_Name << " attacks " << target <<
			", causing " << this->_AttackDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "No more Energy point" << std::endl;
	std::cout << "Energy point: " << this->_EnergyPoint << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoint -= amount;
	std::cout << "ClapTrap " << this->_Name << " loses " << amount << " points of hit !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoint > 0)
	{
		this->_HitPoint += amount;
		this->_EnergyPoint--;
		std::cout << "ClapTrap " << this->_Name << " be repaired and regains " << amount << " points of hit !" << std::endl;
	}
	else
		std::cout << "No more Energy point" << std::endl;
	std::cout << "Energy point: " << this->_EnergyPoint << std::endl;
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_AttackDamage);
}

void	ClapTrap::setAttackDamage(int damage)
{
	this->_AttackDamage = damage;
}