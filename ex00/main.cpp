/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:23:22 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/09 11:01:11 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* heapZombie;
    heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie; // Wichtig! Sonst Memory Leak!

    randomChump("StackZombie");

    return 0;
}