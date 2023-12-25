/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:54 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/25 09:17:41 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap ysf("ysf");
    ysf.attack("chahbi");
    ysf.takeDamage(9);
    ysf.guardGate();
    ysf.beRepaired(1);
}