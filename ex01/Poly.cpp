/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:10:52 by mneri             #+#    #+#             */
/*   Updated: 2023/10/20 16:34:38 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Poly.hpp"

Animal::Animal()
{
	std::cout << YELLOW << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << YELLOW << "Animal destructor called" << std::endl;
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
	std::cout << RED << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain_ = new Brain();
}
Dog::~Dog()
{
	std::cout << RED << "Dog destructor called" << std::endl;
	delete this->brain_;
}

void Dog::makeSound() const
{
	std::cout << "\"Bark!\"" << std::endl;
}

Cat::Cat()
{
	std::cout << GREEN << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain_ = new Brain();
}
Cat::~Cat()
{
	std::cout << GREEN << "Cat destructor called" << std::endl;
	delete this->brain_;

}

void Cat::makeSound() const
{
	std::cout << "\"Meow!\"" << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->type = other.getType();
	brain_ = new Brain(*(other.brain_)); 
}

Dog &Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		delete this->brain_;
		this->brain_ = new Brain(*(other.brain_));
	}
	return *this;
}

Cat::Cat(const Cat &other)
{
	this->type = other.getType();
	brain_ = new Brain(*(other.brain_)); 
}

Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		delete this->brain_;
		this->brain_ = new Brain(*(other.brain_));
	}
	return *this;
}