/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:15:00 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 12:29:50 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap Ftrap("Mouse Trap");
	ScavTrap Strap("Fire arrows");
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
	for(int i = 0; i < 6; i++)
	{
		Strap.attack("Indiana");
		Strap.takeDamage(Strap.getAttackDamage());
	}
	return (0);
}