/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:13:17 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/22 13:28:46 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string	_type;
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string	&getType() const;
        void				setType(std::string type);
};

#endif