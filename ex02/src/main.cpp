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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    std::cout << "--- ClapTrap Test ---" << std::endl;
    ClapTrap c("Ivan");
    c.attack("Petr");
    c.takeDamage(5);
    c.beRepaired(3);

    std::cout << "\n--- ScavTrap Test ---" << std::endl;
    ScavTrap s("Robot");
    s.attack("Bandit");
    s.guardGate();
    s.takeDamage(20);
    s.beRepaired(10);

    std::cout << "\n--- FragTrap Test ---" << std::endl;
    FragTrap f("Frag");
    f.attack("BossFrag");
    f.highFivesGuys();
    f.takeDamage(40);
    f.beRepaired(25);

    return 0;
}