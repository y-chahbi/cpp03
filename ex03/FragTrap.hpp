/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:51:45 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/01 23:33:47 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
    private:
    public:
        FragTrap();
        FragTrap(std::string);
        FragTrap(const FragTrap& Copy);
        FragTrap& operator=(const FragTrap& Copy);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif