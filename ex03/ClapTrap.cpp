/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:32:00 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/07 18:15:14 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Constructor Called!" <<std::endl;
    this->name = "ClapTrap";
    this->Hit = 10;
    this->Energy = 10;
    this->Attack = 0;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap parameterized Constructor Called!" <<std::endl;
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

void    ClapTrap::changeAttrs(std::string lname, int hit, int attcak, int energy)
{
    this->name = lname;
    this->Hit = hit;
    this->Energy = attcak;
    this->Attack = energy;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy > 0 && this->Hit > 0)
    {
        std::cout << this->Name() << " " << this->name << " attacks " << target << " , causing " << "1" << " points of damage!" << std::endl;
        this->Energy--;
    }
    else
        std::cout << "ClapTrap can’t do anything!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit - amount > 0)
    {
        this->Hit -= amount;
        std::cout << this->name << " Just take damage of "<<amount<<" point and still " << this->Hit << " !." << std::endl;
    }
    else
       std::cout << "ClapTrap can’t do anything!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy > 0 && this->Hit > 0)
    {
        this->Hit += amount;
        std::cout << this->name << " Just Repaired its self, Now its Hits is " << this->Hit << " !." << std::endl;
        this->Energy--;
    }
    else
       std::cout << "ClapTrap can’t do anything!" << std::endl;
}

std::string ClapTrap::Name(){return (this->name);}

int ClapTrap::get_Hit(){
    return (Hit);
};

int ClapTrap::get_Energy(){
    return (Energy);
};

int ClapTrap::get_Attack(){
    return (Attack);
};

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor Called!" <<std::endl;
}