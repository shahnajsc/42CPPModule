/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:32:28 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/24 12:12:54 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdint>

#define GREEN		"\033[0;92m"
#define BLUE		"\033[0;94m"
#define RED			"\033[0;31m"
#define YELLOW		"\033[93m"
#define PINK		"\033[0;35m"
#define RESET		"\033[0m"

struct Data
{
	int			id;
	std::string	name;
	double		score;
};

class Serializer
{

private:
	Serializer() = delete;
	Serializer(const Serializer& copyCons) = delete;
	Serializer& operator = (const Serializer& otherCons) = delete;
	~Serializer() = delete;

public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
