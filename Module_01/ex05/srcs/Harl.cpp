/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:45:07 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 18:15:29 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << DEBUG << std::endl;
}
void Harl::info( void )
{
	std::cout << INFO << std::endl;
}
void Harl::warning( void )
{
	std::cout << WARNING << std::endl;
}
void Harl::error( void )
{
    std::cout << ERROR << std::endl;
}

void Harl::complain(std::string _level)
{
    typedef void (Harl::*HarlFunc)(void);
    HarlFunc funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int index = -1;
    for (int i = 0; i < 4; i++) {
        index = (_level == levels[i]) ? i : index;
    }
    switch (index)
    {
    case -1:
        std::cout << _level;
        std::cout << INVALID << std::endl;
        break;

    default:
        std::cout << _level;
        (this->*funcs[index])();
        break;
    }

}
