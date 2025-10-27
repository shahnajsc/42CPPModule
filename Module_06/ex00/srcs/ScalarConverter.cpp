/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:00:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/27 16:30:32 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <iomanip>

void ScalarConverter::convert(const std::string &inputStr) {

	Type type = getType(inputStr);

	if (type == CHAR) {
		printChar(inputStr);
	}
	else if (type == PSEUDO) {
		printPseudo(inputStr);
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
		printInvalid();
	}
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

bool isPseudoLiterals(const std::string &inputStr) {

	std::string inputTemp = inputStr;
	for (size_t i = 0; i < inputTemp.length(); i++) {
		inputTemp[i] = std::tolower(inputTemp[i]);
	}

	if (inputTemp == "nan" || inputTemp == "nanf" || inputTemp == "inf"
		|| inputTemp == "+inf" || inputTemp == "-inf" || inputTemp == "inff"
		|| inputTemp == "+inff" || inputTemp == "-inff")
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
		long long intTemp = stol(inputStr);
		if (intTemp <= std::numeric_limits<int>::max()
			&& intTemp >= std::numeric_limits<int>::min())
			return true;
	}
	return false;
}

bool isDouble(const std::string &inputStr) {

	size_t len = inputStr.length();

	size_t dot = inputStr.find('.');

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

void printPseudo(const std::string &inputStr) {

	std::cout << std::endl << GREEN << "Input is PSEUDO" << RESET << std::endl;

	double intput = std::stod(inputStr);

	std::cout << "  CHAR:   Impossible" << std::endl;
	std::cout << "  INT:    Impossible" << std::endl;
	std::cout << "  FLOAT:  " << static_cast<float>(intput) << "f" << std::endl;
	std::cout << "  DOUBLE: " << intput << std::endl << std::endl;
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

	if (input < std::numeric_limits<char>::min() || input > std::numeric_limits<char>::max())
		std::cout << "  CHAR:   Impossible"  << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(input)))
		std::cout << "  CHAR:   Non displayable"  << std::endl;
	else
		std::cout << "  CHAR:   " << static_cast<char>(input) << std::endl;
	std::cout << "  INT:    " << input << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  FLOAT:  " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "  DOUBLE: " << static_cast<double>(input) << std::endl << std::endl;
}

void printCharSpecial(double input) {

	if (input < std::numeric_limits<char>::min() || input > std::numeric_limits<char>::max())
		std::cout << "  CHAR:   Impossible"  << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(input)))
		std::cout << "  CHAR:   Non displayable"  << std::endl;
	else
		std::cout << "  CHAR:   " << static_cast<char>(input) << std::endl;
}

void printIntSpecial(double input) {

	if (std::isnan(input) || std:: isinf(input))
		std::cout << "  INT:    Impossible"  << std::endl;
	else if (input < std::numeric_limits<int>::min() || input > std::numeric_limits<int>::max())
		std::cout << "  INT:    Impossible"  << std::endl;
	else
		std::cout << "  INT:    " << static_cast<int>(input) << std::endl;
}

void printDouble(const std::string &inputStr) {
	double input = stod(inputStr);

	std::cout << std::endl << GREEN << "Input is DOUBLE" << RESET << std::endl;

	printCharSpecial(input);
	printIntSpecial(input);

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  FLOAT:  " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "  DOUBLE: " << input << std::endl << std::endl;
}

void printFloat(const std::string &inputStr) {
	float input = stof(inputStr);

	std::cout << std::endl << GREEN << "Input is FLOAT" << RESET << std::endl;

	printCharSpecial(input);
	printIntSpecial(input);

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  FLOAT:  " << input << "f" << std::endl;
	std::cout << "  DOUBLE: " <<  static_cast<double>(input) << std::endl << std::endl;
}

void printInvalid() {

	std::cout << std::endl << GREEN << "Input is INVALID" << RESET << std::endl;

	std::cout << "  CHAR:   Impossible"  << std::endl;
	std::cout << "  INT:    Impossible"  << std::endl;
	std::cout << "  FLOAT:  Impossible" << std::endl;
	std::cout << "  DOUBLE: Impossible" << std::endl << std::endl;
}
