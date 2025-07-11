/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:14:13 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/03 13:05:27 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB(std::string name); //Konstruktor nur mit Name 
		void setWeapon(Weapon& weapon); //_weapon = &weapon
		void attack() const; //gleich nur wenn _weapon == nullptr "no weapon to attack with"
};

#endif