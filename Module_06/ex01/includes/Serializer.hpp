/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:32:28 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/23 15:22:37 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdint>


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
