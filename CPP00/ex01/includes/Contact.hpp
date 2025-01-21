/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:04:47 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/19 15:28:19 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string secret;
public:
    Contact();
    ~Contact();
    
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);
    
    Contact     add(Contact contact);
    int         isnull(Contact contact);
    void        display_complete(Contact contact);
    void        print_info(Contact contact, int i);
};

#endif