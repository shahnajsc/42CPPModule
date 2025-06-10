/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArgParser.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:21:02 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 17:57:03 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

class ArgParser
{
private:
	std::string filename;
	std::string s1;
	std::string s2;
	bool valid;

public:
	ArgParser(std::string _filename, std::string _s1, std::string _s2);
	bool isValid() const;
	const std::string& getFilename() const;
	const std::string& getS1() const;
	const std::string& getS2() const;
	~ArgParser();
};
