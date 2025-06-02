/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:01:58 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/02 17:43:27 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_H
# define REPLACER_H

#include "ArgParser.hpp"

class Replacer
{
private:
	std::string filename;
	std::string s1;
	std::string s2;



public:
	Replacer(const std::string filename, const std::string s1, const std::string s2);

	bool replaceAll();

	~Replacer();

};

#endif
