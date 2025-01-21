/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:51:54 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/21 16:50:41 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    Zombie test("Bastien");
    Zombie *essaie = new Zombie("Joseph");

    test.announce();
    essaie->announce();

    test.setName("Jean");
    std::cout << test.getName() << std::endl;

    Zombie *zombie1 = newZombie("Paul");
    zombie1->announce();
    randomChump("Jacques");
    
    delete essaie;
    delete zombie1;
    return 0;
}