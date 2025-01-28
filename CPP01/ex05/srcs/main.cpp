/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:09:45 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/28 12:35:48 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl* harl = new Harl();

    harl->complain("DEBUG");
    harl->complain("INFO");
    harl->complain("WARNING");
    harl->complain("ERROR");
    harl->complain("RANDOM");
    delete harl;
    return 0;
}

