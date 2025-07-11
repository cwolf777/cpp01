/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:50:47 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/07 14:35:12 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    Harl harl;

	if (argc != 2)
	{
        std::cerr << "Usage: ./harl <level>" << std::endl;
        return 1;
    }

    std::string level = argv[1];
    harl.complain(level);

    return 0;
}