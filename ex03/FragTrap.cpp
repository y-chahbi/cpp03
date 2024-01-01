/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:51:47 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/01 23:39:06 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap Constructor Called!" <<std::endl;
    changeAttrs("FragTrap",100,30,100);
}

FragTrap::FragTrap(std::string name){
    std::cout << "FragTrap parameterized Constructor Called!" <<std::endl;
    changeAttrs(name,100,30,100);
}

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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called!" <<std::endl;
}