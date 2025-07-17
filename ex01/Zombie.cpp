/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:08:20 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 13:56:54 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
