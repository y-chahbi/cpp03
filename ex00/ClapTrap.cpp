/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:32:00 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/17 14:45:15 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "";
    this->Hit = 10;
    this->Energy = 10;
    this->Attack = 0;
}

ClapTrap::ClapTrap(std::string name){    
    this->name = name;
    this->Hit = 10;
    this->Energy = 10;
    this->Attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& Copy){ *this = Copy; }

ClapTrap& ClapTrap::operator=(const ClapTrap& Copy)
{
    new(this) ClapTrap(Copy.name);
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy > 0 && this->Hit > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << "1" << " points of damage!" << std::endl;
        this->Energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit > 0)
    {
        this->Hit -= amount;
        std::cout << this->name << " Just take damage of 1 point and still " << this->Hit << " !." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy > 0)
    {
        this->Hit += amount;
        std::cout << this->name << " Just Repaired its self, Now its Hits is " << this->Hit << " !." << std::endl;
        this->Energy--;
    }
}

ClapTrap::~ClapTrap(){}