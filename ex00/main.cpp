#include "ClapTrap.hpp"
#include <iostream>

void separator() {
	std::cout << "\n-----------------------------\n\n";
}

int main() {
	ClapTrap c1("Alpha");
	ClapTrap c2("Beta");

	separator();
	std::cout << "== Initial Combat Round ==\n";
	c1.attack("Beta");      // Alpha attacks Beta
	c2.takeDamage(3);       // Beta takes damage
	c2.beRepaired(2);       // Beta repairs itself

	separator();
	std::cout << "== Energy Drain Test ==\n";
	for (int i = 0; i < 10; ++i)
		c1.attack("Beta");  // Drain all energy
	c1.attack("Beta");      // Should fail due to zero energy

	separator();
	std::cout << "== Death Condition Test ==\n";
	c2.takeDamage(100);     // Kill Beta
	c2.attack("Alpha");     // Dead ClapTrap shouldn't attack
	c2.beRepaired(10);      // Dead ClapTrap shouldn't repair

	separator();
	std::cout << "== Repair With Last Energy Point ==\n";
	ClapTrap c3("Charlie");
	c3.takeDamage(5);       // Take damage
	c3.beRepaired(5);       // Use last energy point to repair
	c3.beRepaired(1);       // Should fail due to zero energy

	separator();
	std::cout << "== End of Tests ==\n";

	return 0;
}
