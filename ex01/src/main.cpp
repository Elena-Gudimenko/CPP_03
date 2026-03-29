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

int main() {
    std::cout << "--- ClapTrap Test ---" << std::endl;
    ClapTrap c("Ivan");
    c.attack("Petr");
    c.takeDamage(5);
    c.beRepaired(3);

    std::cout << "\n--- ScavTrap Test ---" << std::endl;
    ScavTrap s1("RoboT");
    s1.attack("Bandit");
    s1.guardGate();
    s1.takeDamage(20);
    s1.beRepaired(10);

    std::cout << "\n--- ScavTrap Copy Test ---" << std::endl;
    ScavTrap s2 = s1;
    s2.attack("BanditBoss");
    s2.takeDamage(20);
    s2.takeDamage(20);
    s1.takeDamage(5);

    std::cout << "\n--- ScavTrap Multiple Actions Test ---" << std::endl;
    ScavTrap s3("GUARD-BOT");
    for (int i = 0; i < 3; ++i) {
        s3.attack("Petr");
    }
    s3.guardGate();

    return 0;
}
