/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:25:16 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 18:04:58 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ArgParser.hpp"
#include "../includes/Replacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of parameter." << std::endl;
		return (1);
	}

	ArgParser parse(argv[1], argv[2], argv[3]);
	if (!parse.isValid())
		return (1);

	Replacer replacer(parse.getFilename(), parse.getS1(), parse.getS2());
	if (!replacer.replaceAll())
		return (1);

	std::cout << "Replacement complete. Output written to '";
	std::cout << argv[1] << ".replace'" << std::endl;
	return (0);
}

