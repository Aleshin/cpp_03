#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void separator() {
	std::cout << "\n--------------------------\n\n";
}

int main() {
	ClapTrap basic("Basic");
	separator();
	ScavTrap better("Better");
	separator();
	FragTrap thebest("The best");
	separator();
	basic.attack("Better");
	better.attack("The best");
	thebest.attack("Basic");
	separator();
	better.guardGate();
	thebest.highFivesGuys();
	return 0;
}
