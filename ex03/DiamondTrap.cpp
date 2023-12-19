/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:28:48 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/19 00:12:16 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string name){ std::cout << "|" << name<< "|" << this->name << "|"<< std::endl;}
    

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