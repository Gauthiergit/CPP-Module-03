/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:39:59 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 15:10:53 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

	std::string _Name;
	
	public:
	
	DiamondTrap();
	DiamondTrap(std::string Name);
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();

	DiamondTrap&	operator=(const DiamondTrap &change);
	void	attack(const std::string& target);
	void whoAmI();
};

#endif