/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:01:58 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 17:59:37 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../includes/ArgParser.hpp"

class Replacer
{
private:
	std::string filenameR;
	std::string s1R;
	std::string s2R;

	std::string readContent();
	std::string replaceContent(const std::string& _content);
	bool writeToFile(const std::string& _content);

public:
	Replacer(const std::string& _filename, const std::string& _s1,
			 const std::string& _s2);

	bool replaceAll();

	~Replacer();

};
