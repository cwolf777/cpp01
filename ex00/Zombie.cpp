/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:22:01 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/09 13:44:16 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " has been created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destroyed." << std::endl;
}
void Zombie::announce(void)  //brauche ich const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
