/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:08:58 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:00:34 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string const type;

public:
	AMateria();
	AMateria(const std::string  &_type);
	AMateria(const AMateria &copyCons);
	AMateria &operator = (const AMateria &otherCons);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
