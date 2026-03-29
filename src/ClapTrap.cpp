/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 00:08:13 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/29 00:08:13 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
{
	_name = other._name;
	std::cout << "ClapTrap " << _name << " copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " was destroyed" << std::endl;
}

// ***** actions *****
void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " can't attack, no hit points left" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " has no energy to attack." << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " is already destroyed and can't take more damage!" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	if (_hitPoints <= 0)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name
			<< " takes " << amount << " points of damage and is destroyed!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name
			<< " takes " << amount << " points of damage! (" 
			<< _hitPoints << " HP remaining)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " is already dead!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " has no energy to attack." << std::endl;
		return ;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name
		<< " has restore " << amount << " points! (" 
		<< _hitPoints << " HP remaining)" << std::endl;
}

// ***** getters and setters *****
int ClapTrap::getAttackDamage()
{
	return _attackDamage;
}

void ClapTrap::setAttackDamage(unsigned int damage)
{
	_attackDamage = damage;
	std::cout << "ClapTrap " << _name << " has " << _attackDamage << " attack damage!" << std::endl;
}