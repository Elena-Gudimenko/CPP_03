/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 22:51:25 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/28 22:51:25 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap champ("Ivan");
	ClapTrap boss("Petr");

	std::cout << std::endl;

	champ.setAttackDamage(2);
	boss.setAttackDamage(3);

	std::cout << std::endl;

	champ.attack((const std::string&) boss);
	boss.takeDamage(champ.getAttackDamage());
	std::cout << std::endl;
	boss.attack((const std::string&) champ);
	champ.takeDamage(boss.getAttackDamage());
	std::cout << std::endl;
	boss.attack((const std::string&) champ);
	champ.takeDamage(boss.getAttackDamage());
	std::cout << std::endl;
	boss.attack((const std::string&) champ);
	champ.takeDamage(boss.getAttackDamage());
	champ.beRepaired(3);
	std::cout << std::endl;
	boss.attack((const std::string&) champ);
	champ.takeDamage(boss.getAttackDamage());
	std::cout << std::endl;
	champ.attack((const std::string&) boss);
	boss.takeDamage(champ.getAttackDamage());
	std::cout << std::endl;
	boss.attack((const std::string&) champ);
	champ.takeDamage(boss.getAttackDamage());
	
	std::cout << std::endl;

	return 0;
}