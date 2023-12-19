/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:51:47 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/19 02:34:08 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name){changeAttrs(name,100,30,100);}

FragTrap::FragTrap(const FragTrap& Copy){ *this = Copy; }

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives request and my name is " << this->Name() << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& Copy)
{
    new(this) FragTrap(Copy);
    return (*this);
}

FragTrap::~FragTrap(){}