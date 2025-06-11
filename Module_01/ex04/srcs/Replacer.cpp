/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:24:52 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/11 16:33:01 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replacer.hpp"

Replacer::Replacer(	const std::string& _filename,
					const std::string& _s1,
					const std::string& _s2 )
{
	this->filenameR = _filename;
	this->s1R = _s1;
	this->s2R = _s2;
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

	std::ifstream file(filenameR.c_str());
	if (!file.is_open())
	{
		std::cout << "Openning \"" << filenameR << "\" is failed" << std::endl;
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
		std::cout << "Error: Reading failed for file " << filenameR << std::endl;
		return ("");
	}
	file.close();
	return (content);
}

std::string Replacer::replaceContent(const std::string& _content)
{
	std::string result;
	size_t pos = 0;
	size_t found;

	while ((found = _content.find(s1R, pos)) != std::string::npos) {
		result.append(_content.substr(pos, found - pos));
		result.append(s2R);
		pos = found + s1R.length();
	}
	result.append(_content.substr(pos));
	return result;
}

bool Replacer::writeToFile(const std::string& _content)
{
	std::ofstream out((filenameR + ".replace").c_str());
	if (!out)
	{
		std::cerr << "Error: cannot write to file '" << filenameR << ".replace'." << std::endl;
		return false;
	}
	out << _content;
	out.close();
	return true;
}
