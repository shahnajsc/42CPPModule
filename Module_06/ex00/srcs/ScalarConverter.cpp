/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:00:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/24 15:34:45 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <iomanip>

bool isPseudoLiterals(const std::string &inputStr) {

	std::string inputTemp = inputStr;
	for (size_t i = 0; i < inputTemp.length(); i++) {
		inputTemp[i] = std::tolower(inputTemp[i]);
	}

	if (inputTemp == "nan" || inputTemp == "nanf" || inputTemp == "inf"
		|| inputTemp == "+inf" || inputTemp == "-inf" || inputTemp == "inff"
		|| inputTemp == "+inff" || inputTemp == "+inff")
		return true;
	return false;
}

bool isInt(const std::string &inputStr) {

	size_t dot = inputStr.find('.');

	if (dot == inputStr.npos) {

		size_t i = 0;
		if (inputStr[i] == '+' || inputStr[i] == '-')
			i++;
		for (; i < inputStr.length(); i++) {
			if (!isdigit(inputStr[i]))
				return false;
		}
		return true;
	}
	return false;

}

bool isDouble(const std::string &inputStr) {

	size_t len = inputStr.length();

	size_t dot = inputStr.find('.');

	std::cout << "DOT: " << dot << std::endl;

	if (dot != std::string::npos) {

		size_t i = 0;
		if ((inputStr[i] == '+' || inputStr[i] == '-') && len > 2)
			i++;
		for (; i < len; i++) {
			if (!isdigit(inputStr[i]) && inputStr[i] != '.')
				return false;
		}
		return true;
	}
	return false;
}

bool isFloat(const std::string &inputStr) {

	size_t len = inputStr.length();

	if (len < 2)
		return false;

	if (isDouble(inputStr.substr(0, len -1)) && inputStr[len - 1] == 'f')
		return true;
	return false;
}

void printChar(const std::string &inputStr) {
	char input = inputStr[0];

	std::cout << std::endl << GREEN << "Input is CHAR" << RESET << std::endl;

	std::cout << "  CHAR:   " << input << std::endl;
	std::cout << "  INT:    " << static_cast<int>(input) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  FLOAT:  " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "  DOUBLE: " << static_cast<double>(input) << std::endl << std::endl;
}

void printInt(const std::string &inputStr) {
	int input = stoi(inputStr);

	std::cout << std::endl << GREEN << "Input is INT" << RESET << std::endl;

	std::cout << "  CHAR:   " << static_cast<char>(input) << std::endl;
	std::cout << "  INT:    " << input << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  FLOAT:  " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "  DOUBLE: " << static_cast<double>(input) << std::endl << std::endl;
}

void printDouble(const std::string &inputStr) {
	int input = stod(inputStr);

	std::cout << std::endl << GREEN << "Input is DOUBLE" << RESET << std::endl;

	std::cout << "  CHAR:   " << static_cast<char>(input) << std::endl;
	std::cout << "  INT:    " << static_cast<int>(input) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  FLOAT:  " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "  DOUBLE: " << input << std::endl << std::endl;
}

void printFloat(const std::string &inputStr) {
	int input = stof(inputStr);

	std::cout << std::endl << GREEN << "Input is FLOAT" << RESET << std::endl;

	std::cout << "  CHAR:   " << static_cast<char>(input) << std::endl;
	std::cout << "  INT:    " << static_cast<int>(input) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  FLOAT:  " << input << std::endl;
	std::cout << "  DOUBLE: " <<  static_cast<double>(input) << std::endl << std::endl;
}

Type getType(const std::string &inputStr) {

	if (inputStr.length() == 1 && !isdigit(inputStr[0]) && isprint(inputStr[0]))
		return CHAR;
	else if (isPseudoLiterals(inputStr))
		return PSEUDO;
	else if (isInt(inputStr))
		return INT;
	else if(isDouble(inputStr))
		return DOUBLE;
	else if (isFloat(inputStr))
		return FLOAT;
	else
		return INVALID;
}

void ScalarConverter::convert(const std::string &inputStr) {

	Type type = getType(inputStr);

	if (type == CHAR) {
		printChar(inputStr);
	}
	else if (type == PSEUDO) {
		std::cout << "PSEUDO it is" << std::endl;
	}
	else if (type == INT) {
		printInt(inputStr);
	}
	else if (type == DOUBLE) {
		printDouble(inputStr);
	}
	else if (type == FLOAT) {
		printFloat(inputStr);
	}
	else if (type == INVALID) {
		std::cout << "INVALID INPUT" << std::endl;
	}
}
