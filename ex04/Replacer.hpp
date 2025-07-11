/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:26:39 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/03 13:59:11 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <string>

class Replacer
{
	private:
		std::string _filename;	
		std::string _s1;	
		std::string _s2;
	public:
		Replacer(std::string filename, std::string s1, std::string s2);
		bool process();
};

#endif