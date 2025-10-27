/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:32:28 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/27 16:26:41 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

#define GREEN		"\033[0;92m"
#define BLUE		"\033[0;94m"
#define RED			"\033[0;31m"
#define YELLOW		"\033[93m"
#define PINK		"\033[0;35m"
#define RESET		"\033[0m"

enum Type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

class ScalarConverter
{

private:
	ScalarConverter() = delete;
	ScalarConverter(const ScalarConverter& copyCons) = delete;
	ScalarConverter& operator = (const ScalarConverter& otherCons) = delete;
	~ScalarConverter() = delete;

public:
	static void convert(const std::string &inputStr);
};

Type getType(const std::string &inputStr);

bool isPseudoLiterals(const std::string &inputStr);
bool isInt(const std::string &inputStr);
bool isDouble(const std::string &inputStr);
bool isFloat(const std::string &inputStr);

void printPseudo(const std::string &inputStr);
void printChar(const std::string &inputStr);
void printInt(const std::string &inputStr);
void printCharSpecial(double input);
void printIntSpecial(double input);
void printDouble(const std::string &inputStr);
void printFloat(const std::string &inputStr);
void printInvalid();
