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

int main() {
    std::cout << "--- ClapTrap Test ---" << std::endl;
    ClapTrap c("Ivan");
    c.attack("Petr");
    c.takeDamage(5);
    c.beRepaired(8);
    c.takeDamage(4);
    c.takeDamage(2);
    c.beRepaired(3);
    c.takeDamage(11);
    c.beRepaired(2);

    return (0);
}