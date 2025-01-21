/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:52:01 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/21 16:46:16 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

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