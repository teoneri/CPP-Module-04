/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:14:55 by mneri             #+#    #+#             */
/*   Updated: 2023/10/20 16:20:03 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

const std::string PURPLE = "\033[1;35m";

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
};

#endif