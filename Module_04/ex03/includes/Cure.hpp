/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:32:07 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:00:17 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &copyCons);
	Cure &operator = (const Cure &otherCons);
	~Cure();

	AMateria* clone() const override;
	void use(ICharacter& target) override;
};
