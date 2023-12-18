/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:54 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/17 14:48:22 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap youssef("youssef");
    youssef.attack("chahbi");
    youssef.attack("chahbi");
    youssef.attack("chahbi");
    youssef.attack("chahbi");
    youssef.attack("chahbi");
    youssef.takeDamage(1);
    youssef.takeDamage(1);
    youssef.takeDamage(1);
    youssef.takeDamage(1);
    youssef.takeDamage(1);
    youssef.takeDamage(1);
    youssef.attack("chahbi");
    youssef.beRepaired(1);
}