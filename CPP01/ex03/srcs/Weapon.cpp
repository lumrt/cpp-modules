/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:13:20 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/22 13:21:22 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType() const
{
    return (this->_type);
}

void				Weapon::setType(std::string type)
{
    this->_type = type;
}
