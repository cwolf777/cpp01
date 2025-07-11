/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:21:56 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/03 10:54:18 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club("crude spiked club");
		HumanA bob("Bob", club); //braucht direkt waffe?
		bob.attack();
		club.setType("some other type of club"); //aendert waffe 
		bob.attack();
	}
	
	{
		Weapon club("crude spiked club");
		HumanB jim("Jim");
		jim.attack();  //keine Waffe
		jim.setWeapon(club);  //per pointer bekommt Jim Waffe
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}