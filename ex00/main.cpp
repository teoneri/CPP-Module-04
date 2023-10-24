/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:37:57 by mneri             #+#    #+#             */
/*   Updated: 2023/10/20 15:08:39 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Poly.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* Wrong_i = new WrongCat();
	std::cout << Wrong_i->getType() << " " << std::endl;
	Wrong_i->makeSound(); //will output the cat sound!
	WrongMeta->makeSound();
	return 0;
}