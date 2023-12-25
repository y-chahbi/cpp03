/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:00:21 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/25 09:31:34 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Constructor Called!" <<std::endl;
}

ScavTrap::ScavTrap(std::string name){
    std::cout << "ScavTrap parameterized Constructor Called!" <<std::endl;
    changeAttrs(name,100,20,50);
}

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

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->Name() << " Attacked " << target << "!..." << std::endl; 
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called!" <<std::endl;
}