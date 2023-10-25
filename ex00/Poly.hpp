/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:10:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/24 16:35:48 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_HPP
#define POLY_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		std::string getType() const;
};

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		virtual void makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
		virtual void makeSound() const;
};

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		void makeSound() const;
		std::string getType() const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
};


#endif
