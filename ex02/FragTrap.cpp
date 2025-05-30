#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been constructed very vell.\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been destroyed totaly and completely.\n";
}

void FragTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "FragTrap " << _name << " cannot attack. Not enough energy or is destroyed.\n";
		return;
	}
	--_energyPoints;
	std::cout << "FragTrap " << _name << " attacks " << target
	          << " quickly and brutally, " << _attackDamage << " points of damage gone!\n";
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " requests a high five! ✋\n";
}
