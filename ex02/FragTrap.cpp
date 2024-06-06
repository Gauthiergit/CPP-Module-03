/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:09:37 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 12:32:43 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << GREEN << "FragTrap deployed" << RESET << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << GREEN << "FragTrap " << YELLOW << Name << GREEN << " deployed" << RESET << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
}

FragTrap&	FragTrap::operator=(const FragTrap &change)
{
	this->_Name = change._Name;
	this->_HitPoint = change._HitPoint;
	this->_EnergyPoint = change._EnergyPoint;
	this->_AttackDamage = change._AttackDamage;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << GREEN << "Copy FragTrap of " << YELLOW << copy._Name << GREEN << " deployed" << RESET << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap " << YELLOW << this->_Name << GREEN << " destroyed" << RESET << std::endl;
}

void 	FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW << "Hey its FragTrap GIVE ME FIVE Bro !!!" << RESET << std::endl;
}