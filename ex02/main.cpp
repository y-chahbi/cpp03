/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:54 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/18 21:57:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap youssef("youssef");
    ScavTrap ysf("ysf");
    FragTrap str("str");
    ysf.attack("jjjjjjj");
    youssef.attack("chahbi");
    youssef.takeDamage(9);
    ysf.takeDamage(9);
    ysf.guardGate();
    str.highFivesGuys();
    //youssef.attack("chahbi");
    //youssef.beRepaired(1);
}