/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:23:12 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 13:56:43 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main()
{
	int number = 5;
	Zombie* horde = zombieHorde(number, "zomby");

	if (!horde)
	{
		return (1);
	}

	for (int i = 0; i < number; ++i)
	{
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
