/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:44:48 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/03 15:17:37 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

# define DEBUG "DEBUG: I love having 7XL-double-cheese burge."
# define INFO "INFO: I cannot believe adding bacon in burger."
# define WARNING "WARNING: I think I deserve some extra cheese."
# define ERROR "ERROR: Unacceptable! I want some chocolate."
# define INVALID "INVALID: Wrong Level."


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
	void complain(std::string level);
};

#endif
