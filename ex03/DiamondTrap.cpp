/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:34:23 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 17:05:53 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << GREEN << "DiamondTrap deployed" << RESET << std::endl;
	this->_HitPoint = FragTrap::_HitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name+"_clap_name"), ScavTrap(Name), FragTrap(Name), _Name(Name)
{
	std::cout << GREEN << "DiamondTrap " << YELLOW << Name << GREEN << " deployed" << RESET << std::endl;
	this->_HitPoint = FragTrap::_HitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &change)
{
	this->_Name = change._Name;
	this->_HitPoint = change._HitPoint;
	this->_EnergyPoint = change._EnergyPoint;
	this->_AttackDamage = change._AttackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << GREEN << "Copy DiamondTrap of " << YELLOW << copy._Name << GREEN << " deployed" << RESET << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << GREEN << "DiamondTrap " << YELLOW << this->_Name << GREEN << " destroyed" << RESET << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << GREEN << "I am DiamondTrap " << YELLOW << this->_Name  << GREEN << 
		" AND ClapTrap " << YELLOW << ClapTrap::_Name << RESET << std::endl;
}