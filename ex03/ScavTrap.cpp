/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:00:21 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/19 02:16:09 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name){changeAttrs(name,100,20,50);}

ScavTrap::ScavTrap(const ScavTrap& Copy){ *this = Copy; }

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name() << " is now in Gate keeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& Copy)
{
    new(this) ScavTrap(Copy);
    return (*this);
}

ScavTrap::~ScavTrap(){}