#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " has been constructed.\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " has been destroyed.\n";
}

void ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " cannot attack. Not enough energy or is destroyed.\n";
		return;
	}
	--_energyPoints;
	std::cout << "ClapTrap " << _name << " attacks " << target
	          << ", causing " << _attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount
	          << " points of damage! HP now: " << _hitPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " cannot repair. Not enough energy or is destroyed.\n";
		return;
	}
	--_energyPoints;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired for "
	          << amount << " hit points! HP now: " << _hitPoints << "\n";
}
