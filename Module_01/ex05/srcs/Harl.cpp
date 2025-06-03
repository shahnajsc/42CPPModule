/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:45:07 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/03 15:19:04 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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

// void Harl::complain(std::string level)
// {
// 	typedef void (Harl::*HarlFunc)();

// 	HarlFunc functions[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

// 	// switch (level)
// 	// {
// 	// 	case DEBUG:

// 	// 		break;

// 	// 	default:
// 	// 		break;
// 	// }
// }

void Harl::complain(std::string level)
{
    void (Harl::*HarlFunc[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int index = -1;
    for (int i = 0; i < 4; i++) {
        index = (level == levels[i]) ? i : index;
    }
    switch (index)
    {
    case -1:
        std::cout << INVALID << std::endl;
        break;

    default:
        (this->*HarlFunc[index])();
        break;
    }

}
