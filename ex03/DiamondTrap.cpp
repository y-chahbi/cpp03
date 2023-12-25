/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:28:48 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/25 11:54:39 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap const Called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : name(name){std::cout << "DiamondTrap para const Called!" << std::endl;}

DiamondTrap::DiamondTrap(const DiamondTrap& Copy){ *this = Copy; }

std::string DiamondTrap::get_name()
{
    return (this->name);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& Copy)
{
    new(this) DiamondTrap(Copy);
    return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << 
}
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap disconst Called!" << std::endl;
}