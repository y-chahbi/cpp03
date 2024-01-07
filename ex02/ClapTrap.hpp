/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:31:57 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/07 17:50:16 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int         Hit;
        int         Energy;
        int         Attack;
    public:
        ClapTrap();
        ClapTrap(std::string);
        ClapTrap(const ClapTrap& Copy);
        ClapTrap& operator=(const ClapTrap& Copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string Name() const;
        void changeAttrs(std::string,int hit, int attcak, int energy);
        ~ClapTrap();
};

#endif