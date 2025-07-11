/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:05:42 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/03 12:56:04 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type); //Konstruktor, speichert den Waffentyp in _type??? 
		const std::string& getType() const; //returned referenz auf _type
		void setType(std::string type); //aendert per pointer/referenz die waffe
};

#endif