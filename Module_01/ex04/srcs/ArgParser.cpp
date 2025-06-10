/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArgParser.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:24:56 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 18:04:43 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ArgParser.hpp"

ArgParser::ArgParser(	const std::string _filename,
						const std::string _s1,
						const std::string _s2) : valid(true)
{
	this->filename = _filename;
	this->s1 = _s1;
	this->s2 = _s2;
	if (this->filename.empty() || this->s1.empty())
	{
		std::cerr << "Error: Empty argument!" << std::endl;
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
	return (this->filename);
}

const std::string& ArgParser::getS1() const
{
	return (this->s1);
}

const std::string& ArgParser::getS2() const
{
	return (this->s2);
}
