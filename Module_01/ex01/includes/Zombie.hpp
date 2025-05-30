#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{

public:
	Zombie();

	void setName(std::string _name);
	void announce(void);

	~Zombie();

private:
	std::string name;
	static int count;

};

Zombie* zombieHorde(int N, std::string name);

#endif
