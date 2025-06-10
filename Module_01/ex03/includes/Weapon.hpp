#pragma once

#include <iostream>
#include <string>

class Weapon
{

public:
	Weapon(const std::string &_type);

	const std::string &getType() const;
	void setType(const std::string _type);

	~Weapon();

private:
	std::string type;
};
