/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:12:57 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/21 13:12:58 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[++j])
    {
        i = -1;
        while (argv[j][++i])
            std::cout << (char)toupper(argv[j][i]);
    }
    std::cout << std::endl;
    return 0;
}