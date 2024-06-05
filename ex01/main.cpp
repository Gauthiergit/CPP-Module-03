/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:15:00 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/05 16:15:02 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Trap("Mouse Trap");
	Trap.setAttackDamage(5);

	for(int i = 0; i < 3; i++)
	{
		Trap.attack("mouse");
		Trap.takeDamage(Trap.getAttackDamage());
	}
	Trap.beRepaired(10);
	std::cout << "------------------------------------------------" << std::endl;
	Trap.setAttackDamage(1);
	for(int i = 0; i < 8; i++)
	{
		Trap.attack("mouse");
		Trap.takeDamage(Trap.getAttackDamage());
	}
	return (0);
}