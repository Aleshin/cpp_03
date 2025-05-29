#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void separator() {
	std::cout << "\n--------------------------\n\n";
}

int main() {
	ClapTrap basic("Basic");
	basic.attack("target");

	separator();

	ScavTrap guard("Guard");
	guard.attack("intruder");
	guard.guardGate();

	separator();

	FragTrap bomber("Bomber");
	bomber.attack("enemy");
	bomber.highFivesGuys();

	separator();

	return 0;
}
