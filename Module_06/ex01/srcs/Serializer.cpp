/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:00:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/23 15:05:02 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

	uintptr_t Serializer::serialize(Data* ptr) {

		uintptr_t intValue = reinterpret_cast<uintptr_t>(ptr);
		return intValue;
	}

	Data* Serializer::deserialize(uintptr_t raw) {

		Data *ptrValue = reinterpret_cast<Data*>(raw);
		return ptrValue;
	}
