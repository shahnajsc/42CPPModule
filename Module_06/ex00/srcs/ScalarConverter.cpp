/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:00:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/20 17:19:35 by shachowd         ###   ########.fr       */
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

	// identity the type
	// print (static cast)

}
