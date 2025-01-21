/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:12:09 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/21 17:14:05 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    _name = "default";
}

Zombie::Zombie(std::string name):_name(name)
{}

Zombie::~Zombie()
{
    std::cout << getName() << std::endl; 
}

void Zombie::announce(void)
{
    std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const {
    return _name;
}

void Zombie::setName(std::string name) {
    _name = name;
}