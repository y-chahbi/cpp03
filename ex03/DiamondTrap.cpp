/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:28:48 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/19 02:29:47 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string name) : name(name){}

DiamondTrap::DiamondTrap(const DiamondTrap& Copy){ *this = Copy; }

std::string DiamondTrap::get_name()
{
    std::cout << &*this << std::endl; 
    return (this->name);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& Copy)
{
    new(this) DiamondTrap(Copy);
    return (*this);
}

DiamondTrap::~DiamondTrap(){}