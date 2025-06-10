/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:52:57 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 13:56:16 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{

public:

	Zombie();
	Zombie(const std::string &_name);
	~Zombie();

	void announce(void);

private:
	std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
