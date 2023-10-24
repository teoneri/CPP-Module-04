/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:47:15 by mneri             #+#    #+#             */
/*   Updated: 2023/10/24 14:57:29 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	type_ = "";
}

AMateria::AMateria(std::string const & type)
{
	type_ = type;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return type_;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if(this != &other)
	{
		this->type_ = other.type_;
	}
	return *this;
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->type_ << " used on " << target.getName() << std::endl;
}

void Ice::use(ICharacter &target)
{
	std::cout << this->type_ << ": '* shoots an ice bolt at " << target.getName() 
			<< " *'" << std::endl;
}

Ice::Ice()
{
	type_ = "ice";
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

Cure::Cure()
{
	type_ = "cure";
}

void Cure::use(ICharacter &target)
{
	std::cout << this->type_ << ": '* heals " << target.getName() 
			<< "'s wounds *'" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}
