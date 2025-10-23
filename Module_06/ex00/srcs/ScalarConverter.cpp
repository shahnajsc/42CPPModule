/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:00:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/23 22:07:09 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

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

}

bool isFloat(const std::string &inputStr) {

}

bool isDouble(const std::string &inputStr) {

}

void printChar(const std::string &inputStr) {
	char input = inputStr[0];

	std::cout << "Input is CHAR" << std::endl;

	std::cout << "CHAR: " << input << std::endl;
	std::cout << "INT: " << static_cast<int>(input) << std::endl;
	std::cout << "FLOAT: " << static_cast<float>(input) << std::endl;
	std::cout << "DOUBLE: " << static_cast<double>(input) << std::endl;
}

Type getType(const std::string &inputStr) {

	if (inputStr.length() == 1 && !isdigit(inputStr[0]))
		return CHAR;
	else if (isPseudoLiterals(inputStr))
		return PSEUDO;
	else if (isInt(inputStr))
		return INT;
	else if (isFloat(inputStr))
		return FLOAT;
	else if(isDouble(inputStr))
		return DOUBLE;
	else
		return INVALID;
}

void ScalarConverter::convert(const std::string &inputStr) {

	Type type = getType(inputStr);

	if (type == CHAR) {
		printChar(inputStr);
	}
	else if (type == INT) {
		
	}


}
