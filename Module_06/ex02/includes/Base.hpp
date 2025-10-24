/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:32:28 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/24 12:01:13 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define GREEN		"\033[0;92m"
#define RED			"\033[0;31m"
#define YELLOW		"\033[93m"
#define PINK		"\033[0;35m"
#define RESET		"\033[0m"

#include <iostream>

class Base {
public:
	virtual ~Base();

};
