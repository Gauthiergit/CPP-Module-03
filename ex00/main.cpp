/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:15:00 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/05 12:21:24 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Trap("Mouse Trap");

	Trap.setAttackDamage(5);

	Trap.attack("mouse");
	Trap.takeDamage(Trap.getAttackDamage());
	Trap.beRepaired(2);
	for(int i = 0; i < 10; i++)
		Trap.attack("mouse");
	return (0);
}