/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:27:01 by lumaret           #+#    #+#             */
/*   Updated: 2025/08/16 14:00:51 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void test_claptrap(void)
{
	ClapTrap claptrap("Martin");
	
	// First batch of actions
	std::cout << "	[+] First batch" << std::endl;
	claptrap.attack("Matin");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	
	// Remove all energy points
	std::cout << "	[+] Removing all energy points" << std::endl;
	for (int i = 0; i < 9; i++)
		claptrap.beRepaired(1);
	
	// Second batch of actions without energy points
	std::cout << "	[+] Second batch" << std::endl;
	claptrap.attack("Matin");
	claptrap.takeDamage(20);
	claptrap.beRepaired(5);

	// dead ClapTrap
	std::cout << "	[+] Dead ClapTrap" << std::endl;
	claptrap.attack("Matin");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
}

void test_scavtrap(void)
{
	ScavTrap scavtrap("Geoffrey");

	// First batch of actions
	std::cout << "	[+] First batch" << std::endl;
	scavtrap.attack("Matin");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	// Remove all energy points
	std::cout << "	[+] Removing all energy points" << std::endl;
	for (int i = 0; i < 49; i++)
		scavtrap.beRepaired(1);
	// Second batch of actions without energy points
	std::cout << "	[+] Second batch" << std::endl;
	scavtrap.attack("Matin");
	scavtrap.takeDamage(4242);
	scavtrap.beRepaired(5);
	// dead ScavTrap
	std::cout << "	[+] Dead ScavTrap" << std::endl;
	scavtrap.attack("Matin");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	// ScavTrap guard mode
	std::cout << "	[+] ScavTrap guard mode" << std::endl;
	scavtrap.guardGate();
	scavtrap.guardGate();
}

void test_fragtrap(void)
{
	FragTrap fragtrap("Leonard");

	// First batch of actions
	std::cout << "	[+] First batch" << std::endl;
	fragtrap.attack("Matin");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(3);
	fragtrap.highFivesGuys();
	// Remove all energy points
	std::cout << "	[+] Removing all energy points" << std::endl;
	for (int i = 0; i < 49; i++)
		fragtrap.beRepaired(1);
	// Second batch of actions without energy points
	std::cout << "	[+] Second batch" << std::endl;
	fragtrap.attack("Matin");
	fragtrap.takeDamage(4242);
	fragtrap.beRepaired(5);
	// dead FragTrap
	std::cout << "	[+] Dead FragTrap" << std::endl;
	fragtrap.attack("Matin");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(3);
	// FragTrap high fives
	std::cout << "	[+] FragTrap high fives" << std::endl;
	fragtrap.highFivesGuys();
}

int main(void)
{
	test_claptrap();
	std::cout << std::endl << "====================" << std::endl;
	test_scavtrap();
	std::cout << std::endl << "====================" << std::endl;
	test_fragtrap();
	return (0);
}