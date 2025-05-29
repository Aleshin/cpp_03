#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	~FragTrap();

	void attack(const std::string& target); // Optional override
	void highFivesGuys(void);
};

#endif
