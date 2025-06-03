/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:24:52 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/03 13:39:46 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(	const std::string& filename,
					const std::string& s1,
					const std::string& s2 )
{
	this->_filename = filename;
	this->_s1 = s1;
	this->_s2 = s2;
}

Replacer::~Replacer()
{

}

bool Replacer::replaceAll()
{
	std::string content = readContent();
	if (content.empty())
		return (false);

	std::string replacedCont = replaceContent(content);

	if (!writeToFile(replacedCont))
		return (false);
	return (true);
}

std::string Replacer::readContent()
{
	std::string line;
	std::string content;

	std::ifstream file(_filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Openning \"" << _filename << "\" is failed" << std::endl;
		return ("");
	}

	while (std::getline(file, line))
	{
		content += line;
		if (!file.eof())
			content += "\n";
	}

	if (file.bad())
	{
		std::cout << "Error: Reading failed for file " << _filename << std::endl;
		return ("");
	}
	file.close();
	return (content);
}

std::string Replacer::replaceContent(const std::string& content)
{
	std::string result;
	size_t pos = 0;
	size_t found;

	while ((found = content.find(_s1, pos)) != std::string::npos) {
		result.append(content.substr(pos, found - pos));
		result.append(_s2);
		pos = found + _s1.length();
	}
	result.append(content.substr(pos));
	return result;
}

bool Replacer::writeToFile(const std::string& content)
{
	std::ofstream out((_filename + ".replace").c_str());
	if (!out)
	{
		std::cerr << "Error: cannot write to file '" << _filename << ".replace'." << std::endl;
		return false;
	}
	out << content;
	out.close();
	return true;
}
