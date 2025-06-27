/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:08:58 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/27 12:11:48 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AMateria
{
protected:
	std::string type;

public:
	AMateria(/* args */);
	AMateria(std::string const & type); //
	~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0; //
	virtual void use(ICharacter& target); //
};

AMateria::AMateria(/* args */)
{
}

AMateria::~AMateria()
{
}

