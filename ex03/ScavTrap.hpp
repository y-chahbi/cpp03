/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:57:52 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/19 02:15:38 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
    public:
        ScavTrap();
        ScavTrap(std::string);
        ScavTrap(const ScavTrap& Copy);
        ScavTrap& operator=(const ScavTrap& Copy);
        void guardGate();
        ~ScavTrap();
};

#endif