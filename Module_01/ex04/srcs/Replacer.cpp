/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:24:52 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/02 18:03:03 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(	const std::string filename,
					const std::string s1,
					const std::string s2 )
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Replacer::~Replacer()
{

}
std::string readContent(const std::string filename)
{
	std::string line;
	std::string content;

	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Openning \"" << filename << "\" is failed" << std::endl;
		return (NULL);
	}

	while (std::getline(file, line))
		content += line;
	if (file.bad())
	{
		std::cout << "Error: An I/O error occured while reading the file " << filename << std::endl;
		return (NULL);
	}
	file.close();
	return (content);
}

std::string replaceContent(const std::string content)
{

}

bool Replacer::replaceAll()
{
	std::string content = readContent(this->filename);
	if (content.empty())
		return (false);

	std::string replacedCont = replaceContent(content);



	std::cout << content << std::endl;
	return (true);
}
