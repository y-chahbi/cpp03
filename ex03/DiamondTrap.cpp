/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:28:48 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/01 23:42:18 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap Constructor Called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : name(name){
    std::cout << "DiamondTrap parameterized Constructor Called!" << std::endl;
    changeAttrs(name, FragTrap::get_Hit(), ScavTrap::get_Energy(), FragTrap::get_Attack());
}


DiamondTrap::DiamondTrap(const DiamondTrap& Copy){ *this = Copy; }

std::string DiamondTrap::get_name()
{
    return (this->name);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& Copy)
{
    new(this) DiamondTrap(Copy);
    return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "|" << name << " " << ClapTrap::Name() << "|" << std::endl;
}
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap Destructor Called!" << std::endl;
}