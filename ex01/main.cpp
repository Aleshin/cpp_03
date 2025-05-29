#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void separator() {
	std::cout << "\n-----------------------------\n\n";
}

int main() {
	ClapTrap basic("Basic");
	basic.attack("target");

	std::cout << "\n---\n\n";

	ScavTrap elite("Elite");
	elite.attack("target");
	elite.guardGate();

	return 0;
}
