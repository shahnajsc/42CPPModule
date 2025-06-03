/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:01:58 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/03 11:06:58 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_H
# define REPLACER_H

#include "ArgParser.hpp"

class Replacer
{
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;

	std::string readContent();
	std::string replaceContent(const std::string& content);
	bool writeToFile(const std::string& content);

public:
	Replacer(const std::string& filename, const std::string& s1,
			 const std::string& s2);

	bool replaceAll();

	~Replacer();

};

#endif
