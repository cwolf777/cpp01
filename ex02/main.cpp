/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:46:43 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 13:58:05 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN"; 
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << "Memory address of the string variable: " <<&brain <<std::endl;
	std::cout << "Memory address held by stringPTR:     " <<stringPTR <<std::endl;
	std::cout << "Memory address held by stringREF:     " <<&stringREF <<std::endl;
	
	std::cout << "Value of the string variable: " <<brain <<std::endl;
	std::cout << "Value held by stringPTR:     " <<*stringPTR <<std::endl;
	std::cout << "Value held by stringREF:     " <<stringREF <<std::endl;

	return 0;
}
