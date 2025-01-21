/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:01:05 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/21 15:40:14 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook pb;
    int     i;

    i = 0;
    while (42)
    {
        std::cout << "\033[1;94m >> Enter a command:\033[0m";
        if (!std::getline(std::cin, command)) {
            std::cout << "\nEOF detected. Exiting...\n";
            break;
        }
        // cleaning convention
        command.erase(0, command.find_first_not_of(" \t\v\f\r"));
        while (isspace(command[command.length() - 1]))
            command.erase(command.find_last_not_of(" \t\v\r\f") + 1, command[command.length() - 1]);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            i = pb.check_pb(pb);
            if (i > 7)
            {
                i = -42;
                while (i == -42)
                {
                    std::cout << "Attention! Maximum number of contacts reached, If you continue the oldest contact will be deleated in order to add the new one. (Y/N):";
                    if (!std::getline(std::cin, command)) {
                        std::cout << "\nEOF detected. Exiting...\n";
                        if (std::cin.eof())
                            break;
                    }
                    // cleaning convention
                    command.erase(0, command.find_first_not_of(" \t\v\f\r"));
                    while (isspace(command[command.length() - 1]))
                        command.erase(command.find_last_not_of(" \t\v\r\f") + 1, command[command.length() - 1]);
                    if (command == "Y")
                    {
                        pb = pb.del_one(pb);
                        i = 7;
                    }
                    else if (command == "N")
                        i = -1;
                    else
                        std::cout << "Not valid entrance!, try again.\n";
                }
            }
            if (i >= 0)
                pb = pb.add_i(pb, i);
        }
        else if (command == "SEARCH")
            pb.display(pb);
        else if (command.empty())
            continue ;
        else
            std::cout << "\e[31mNot a valid command! Try again" << std::endl;
    }
}