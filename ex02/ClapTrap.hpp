/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:04:46 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 11:14:09 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define BLUE "\033[94m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

class ClapTrap
{
	protected:
	
	std::string _Name;
	int			_HitPoint;
	int			_EnergyPoint;
	int			_AttackDamage;

	public:

	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap &change);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	int	getAttackDamage(void) const;
	void	setAttackDamage(int damage);
};

#endif