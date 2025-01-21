/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:06:54 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/19 15:28:11 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[9];
    public:
        PhoneBook();
        ~PhoneBook();
        int         check_pb(PhoneBook pb);
        PhoneBook   del_one(PhoneBook pb);
        void        display(PhoneBook pb);
        PhoneBook        add_i(PhoneBook pb, int i);
};

#endif