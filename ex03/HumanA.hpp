/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:16:04 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/03 12:57:59 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;  //referenz auf waffe muss bei erstellen zugeweisen werden kan nicht leer sein
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack() const;
};

#endif