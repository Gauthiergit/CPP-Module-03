/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:15:00 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 16:42:58 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap Ftrap("Mouse Trap");
	ScavTrap Strap("Fire arrows");
	FragTrap Ttrap("Rock Ball");
	DiamondTrap Etrap("Snake Pit"); 
	Ftrap.setAttackDamage(5);
	for(int i = 0; i < 3; i++)
	{
		Ftrap.attack("mouse");
		Ftrap.takeDamage(Ftrap.getAttackDamage());
	}
	Ftrap.beRepaired(10);
	std::cout << std::endl;
	Strap.guardGate();
	std::cout << std::endl;
	for(int i = 0; i < 3; i++)
	{
		Strap.attack("Indiana");
		Strap.takeDamage(Strap.getAttackDamage());
	}
	std::cout << std::endl;
	Ttrap.highFivesGuys();
	std::cout << std::endl;
	for(int i = 0; i < 4; i++)
	{
		Ttrap.attack("Cat");
		Ttrap.takeDamage(Ttrap.getAttackDamage());
	}
	Ttrap.beRepaired(50);
	std::cout << std::endl;
	Etrap.whoAmI();
	std::cout << std::endl;
	for(int i = 0; i < 3; i++)
	{
		Etrap.attack("Ragnar");
		Etrap.takeDamage(Etrap.getAttackDamage());
	}
	return (0);
}