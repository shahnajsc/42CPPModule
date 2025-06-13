/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:53:12 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/13 11:01:44 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon
{

public:
	Weapon(const std::string &_type);

	const std::string &getType() const;
	void setType(const std::string _type);

	~Weapon();

private:
	std::string type;
};
