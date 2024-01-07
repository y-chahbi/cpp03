/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:28:48 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/07 18:00:46 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap Constructor Called!" << std::endl;
    changeAttrs(name + "_clap_name", FragTrap::get_Hit(), ScavTrap::get_Energy(), FragTrap::get_Attack());
}

DiamondTrap::DiamondTrap(std::string name) : name(name){
    std::cout << "DiamondTrap parameterized Constructor Called!" << std::endl;
    changeAttrs(name + "_clap_name", FragTrap::get_Hit(), ScavTrap::get_Energy(), FragTrap::get_Attack());
}


DiamondTrap::DiamondTrap(const DiamondTrap& Copy){ *this = Copy; }

std::string DiamondTrap::get_name() const
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
    std::cout << "Hello its me '" << Name() << "' So this Who am I!" << std::endl;
}
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap Destructor Called!" << std::endl;
}