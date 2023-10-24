/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:10:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/20 16:43:57 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_HPP
#define POLY_HPP

#include <iostream>
#include "Brain.hpp"

const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string RESET_COLOR = "\033[0m";

class Animal
{
	protected:
		std::string type;
		Animal();
	public:
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		std::string getType() const;
};

class Dog : public Animal
{	
	private:
		Brain *brain_;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		virtual void makeSound() const;
};

class Cat : public Animal
{
	private:
		Brain *brain_;
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		virtual void makeSound() const;
};
#endif
