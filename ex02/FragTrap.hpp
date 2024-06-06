/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:04:01 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/06 12:08:51 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap &copy);
	~FragTrap();

	FragTrap&	operator=(const FragTrap &change);
	void 	highFivesGuys(void);
};

#endif