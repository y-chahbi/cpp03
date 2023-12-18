/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:54 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/18 11:57:42 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap youssef("youssef");
    ScavTrap ysf("ysf");
    ysf.attack("jjjjjjj");
    youssef.attack("chahbi");
    youssef.takeDamage(9);
    ysf.takeDamage(9);
    ysf.guardGate();
    //youssef.attack("chahbi");
    //youssef.beRepaired(1);
}