/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:32:28 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/24 12:13:12 by shachowd         ###   ########.fr       */
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
