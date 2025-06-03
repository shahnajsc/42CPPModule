/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArgParser.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:24:56 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/03 11:18:06 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ArgParser.hpp"

ArgParser::ArgParser(	const std::string filename,
						const std::string s1,
						const std::string s2) : valid(true)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
	if (filename.empty() || s1.empty())
	{
		std::cout << "Error: Empty argument!" << std::endl;
		this->valid = false;
	}
}

ArgParser::~ArgParser()
{
}
bool ArgParser::isValid() const
{
	return (this->valid);
}

const std::string& ArgParser::getFilename() const
{
	return (filename);
}

const std::string& ArgParser::getS1() const
{
	return (s1);
}

const std::string& ArgParser::getS2() const
{
	return (s2);
}
