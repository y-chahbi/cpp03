/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:54 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/07 16:02:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap youssef("youssef");
    youssef.attack("chahbi");
    youssef.takeDamage(1);
    youssef.beRepaired(1);
}