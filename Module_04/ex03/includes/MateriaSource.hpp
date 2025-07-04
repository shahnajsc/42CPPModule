/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:36:00 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:43:36 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* catalogue[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copyCons);
	MateriaSource &operator = (const MateriaSource &otherCons);
	~MateriaSource();

	void learnMateria(AMateria *m) override;
	AMateria* createMateria(std::string const & type) override;
};
