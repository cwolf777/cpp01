/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:14:34 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 13:56:59 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	if (n <= 0)
		return nullptr;
	
	Zombie* horde;
	
	horde = new Zombie[n];
	for(int i = 0; i < n; ++i)
	{
		horde[i].setName(name);
	}
	
	return horde;
}
