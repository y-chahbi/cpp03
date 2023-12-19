/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:54 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/19 00:11:31 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap youssef("youssef");
    ScavTrap ysf("ysf");
    FragTrap str("str");
    DiamondTrap Dia("diamonda");
    // ysf.attack("jjjjjjj");
    // youssef.attack("chahbi");
    // youssef.takeDamage(9);
    // ysf.takeDamage(9);
    // ysf.guardGate();
    // str.highFivesGuys();
    std::cout << Dia.get_name() << std::endl;
    //std::cout << Dia.Name() << std::endl;
    //youssef.attack("chahbi");
    //youssef.beRepaired(1);
}