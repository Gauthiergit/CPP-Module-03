/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:15:00 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 11:58:18 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap Trap("Mouse Trap");

	for(int i = 0; i < 3; i++)
	{
		Trap.attack("mouse");
		Trap.takeDamage(Trap.getAttackDamage());
	}
	Trap.beRepaired(100);
	std::cout << std::endl;
	Trap.guardGate();
	Trap.setAttackDamage(1);
	std::cout << std::endl;
	for(int i = 0; i < 47; i++)
	{
		Trap.attack("mouse");
		Trap.takeDamage(Trap.getAttackDamage());
	}
	return (0);
}