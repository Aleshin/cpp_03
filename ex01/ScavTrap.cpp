#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been constructed.\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " has been destroyed.\n";
}

void ScavTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " cannot attack. Not enough energy or is destroyed.\n";
		return;
	}
	--_energyPoints;
	std::cout << "ScavTrap " << _name << " attacks " << target
	          << ", dealing " << _attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " has entered Gate keeper mode.\n";
}
