/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:30:23 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:00:29 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria* slot[4];

public:
	Character();
	Character(std::string _name);
	Character(const Character &copyCons);
	Character &operator = (const Character &otherCons);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
