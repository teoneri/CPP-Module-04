/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:10:52 by mneri             #+#    #+#             */
/*   Updated: 2023/10/24 16:38:24 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Poly.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
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
	std::cout << "Dog constructor called." << std::endl;
	this->type = "Dog";
}
Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "\"Bark!\"" << std::endl;
}

Cat::Cat()
{
	std::cout << "Cat constructor called." << std::endl;
	this->type = "Cat";
}
Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\"Meow!\"" << std::endl;
}

WrongCat::WrongCat()
{
	std::cout << "Wrong Cat constructor called." << std::endl;
	this->type = "WrongCat";
}
WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat deconstrucor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "\"WrongCat Meow!\"" << std::endl;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal deconstructor called." << std::endl;
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

