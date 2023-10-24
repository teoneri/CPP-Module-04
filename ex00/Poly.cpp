/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:10:52 by mneri             #+#    #+#             */
/*   Updated: 2023/10/20 15:06:10 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Poly.hpp"

Animal::Animal()
{
}

Animal::~Animal()
{
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Animal::makeSound() const
{
}

std::string  Animal::getType() const
{
	return type;
}

Dog::Dog()
{
	this->type = "Dog";
}
Dog::~Dog()
{
}

void Dog::makeSound() const
{
	std::cout << "\"Bark!\"" << std::endl;
}

Cat::Cat()
{
	this->type = "Cat";
}
Cat::~Cat()
{
}

void Cat::makeSound() const
{
	std::cout << "\"Meow!\"" << std::endl;
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
}
WrongCat::~WrongCat()
{
}

void WrongCat::makeSound() const
{
	std::cout << "\"WrongCat Meow!\"" << std::endl;
}

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound" << std::endl;
}

std::string  WrongAnimal::getType() const
{
	return type;
}

