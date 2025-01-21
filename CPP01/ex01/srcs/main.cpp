/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:12:07 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/21 17:16:43 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++) {
        horde[i].announce();
    }
    delete [] horde;
    return 0;
}