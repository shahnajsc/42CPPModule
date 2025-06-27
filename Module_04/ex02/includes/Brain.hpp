/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:33:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/27 11:44:29 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
protected:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain& copyCons);
	Brain& operator = (const Brain& otherCons);
	virtual ~Brain();

	void setIdea(unsigned int index, const std::string& idea);
	std::string getIdea(unsigned int index);
};
