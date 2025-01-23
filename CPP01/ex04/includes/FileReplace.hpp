/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:33:02 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/23 16:58:00 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <string>

class FileReplace {
public:
    FileReplace(const std::string& filename, const std::string& s1, const std::string& s2);
    void process();

private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

    std::string replaceAll(const std::string& line) const;
};

#endif
