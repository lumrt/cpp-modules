/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:13:07 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/22 13:30:04 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void	attack() const;
    private:
        std::string	_name;
        Weapon		&_weapon;
};

#endif