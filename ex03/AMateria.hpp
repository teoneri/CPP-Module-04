/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:47:46 by mneri             #+#    #+#             */
/*   Updated: 2023/10/24 14:26:56 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type_;
		AMateria();
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &other);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
	public:
		Ice();
		~Ice(){}
		virtual AMateria *clone() const;
		virtual void use(ICharacter& target);
};

class Cure : public AMateria
{
	public:
		Cure();
		~Cure(){}
		virtual AMateria *clone() const;
		virtual void use(ICharacter& target);
};

#endif