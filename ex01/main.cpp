#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
	ClapTrap basic("Basic");
	ScavTrap advanced("Advanced");
	basic.attack("Advanced");
	advanced.attack("Basic");

	std::cout << "\n--------\n\n";

	ScavTrap elite("Elite");
	elite.attack("target");
	elite.guardGate();

	return 0;
}
