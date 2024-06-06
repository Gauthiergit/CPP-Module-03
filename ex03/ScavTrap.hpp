/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:39:47 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 14:48:01 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap &change);

	void	attack(const std::string& target);
	void	guardGate();
};

#endif