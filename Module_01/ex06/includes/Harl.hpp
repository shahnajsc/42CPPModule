/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:44:48 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/11 10:26:24 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define DEBUG ": I love having 7XL-double-cheese burge."
# define INFO ": I think I deserve some extra cheese."
# define WARNING ": I cannot believe adding bacon in burger."
# define ERROR ": Unacceptable! I want some chocolate."
# define INVALID ": Invalid Level."


class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl();
	~Harl();
	void complain(std::string _level);
};
