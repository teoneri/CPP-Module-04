/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:37:16 by mneri             #+#    #+#             */
/*   Updated: 2023/10/24 14:02:08 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Character::Character(std::string name)
{
	name_ = name;
	this->inventory[0] = NULL;
	this->inventory[1] = NULL;
	this->inventory[2] = NULL;
	this->inventory[3] = NULL;
}

std::string const &Character::getName() const
{
	return name_;
}

void Character::equip(AMateria* m)
{
	static int i = 0;

	if(i < 4)
	{
		this->inventory[i] = m;
		i++;
	}
}

void Character::unequip(int idx)
{
	if(idx >= 0  && idx < 4)
	{
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
	}
}

Character::Character(const Character &other) : name_(other.name_) 
{
    for (int i = 0; i < 4; i++) 
	{
		if (other.inventory[i]) 
		{	
			delete this->inventory[i];
			this->inventory[i] = other.inventory[i]->clone();
		}
        else
            this->inventory[i] = NULL;
    
    }
}

Character &Character::operator=(const Character &other)
{
	if(this != &other)
	{
		this->name_ = other.name_;
		for (int i = 0; i < 4; i++) 
		{
			if (other.inventory[i]) 
			{	
				delete this->inventory[i];
				this->inventory[i] = other.inventory[i]->clone();
			}
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for(int i =0; i < 4; i++)
	{
		delete this->inventory[i];
	}
}