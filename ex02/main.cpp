/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:54 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/07 16:12:46 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ScavTrap ysf("ysf");
    FragTrap str("str");
    ysf.attack("mouad");
    ysf.takeDamage(9);
    ysf.guardGate();
    str.highFivesGuys();

}