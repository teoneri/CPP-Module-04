/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:36:11 by mneri             #+#    #+#             */
/*   Updated: 2023/10/24 14:55:43 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* materia)
{
	static int i = 0;
	if(i < 4)
		this->materia_[i] = materia;
	i++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->materia_[i]->getType() == type)
			return this->materia_[i]->clone();
	}
	return 0;
}

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		this->materia_[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->materia_[i] != NULL)
			delete this->materia_[i];
	}
}