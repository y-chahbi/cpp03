/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:57:52 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/07 17:37:08 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string);
        ScavTrap(const ScavTrap& Copy);
        ScavTrap& operator=(const ScavTrap& Copy);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};

#endif