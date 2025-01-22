/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:13:01 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/22 13:28:02 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string	_name;
        Weapon		*_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void	setWeapon(Weapon &weapon);
        void	attack() const;
};

#endif