/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:33:13 by lumaret           #+#    #+#             */
/*   Updated: 2025/01/22 13:51:05 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <fstream>
#include <iostream>
#include <stdexcept>

FileReplace::FileReplace(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

void FileReplace::process() {
    std::ifstream inputFile(_filename.c_str());
    if (!inputFile.is_open()) {
        throw std::runtime_error("Could not open input file.");
    }

    std::ofstream outputFile((_filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        throw std::runtime_error("Could not open output file.");
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceAll(line) << std::endl;
    }

    inputFile.close();
    outputFile.close();
}

std::string FileReplace::replaceAll(const std::string& line) const {
    std::string result;
    size_t pos = 0, prevPos = 0;

    while ((pos = line.find(_s1, prevPos)) != std::string::npos) {
        result.append(line, prevPos, pos - prevPos);
        result.append(_s2);
        prevPos = pos + _s1.length();
    }

    result.append(line, prevPos, line.length() - prevPos);
    return result;
}
