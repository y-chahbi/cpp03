/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:28:46 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/07 18:00:40 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string);
        DiamondTrap(const DiamondTrap& Copy);
        DiamondTrap& operator=(const DiamondTrap& Copy);
        std::string get_name() const;
        void attack(const std::string& target);
        void    whoAmI();
        ~DiamondTrap();  
};