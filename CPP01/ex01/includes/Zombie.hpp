/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:11:31 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/21 17:15:35 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    std::string getName() const;
    void setName(std::string name);
    
    void announce();
};

Zombie* zombieHorde(int N, std::string name);