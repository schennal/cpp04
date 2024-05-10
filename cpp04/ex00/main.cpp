/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:08:38 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 17:59:43 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	const Animal *meta = new Animal;
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << DEFAULT;

	delete i;
	delete j;
	delete meta;
	
	
	std::cout << YELLOW "\nWrong Animal Tests" DEFAULT << std::endl;
	const WrongAnimal *wrongAnimal = new WrongAnimal;
	const WrongAnimal *wrongCat = new WrongCat;

	std::cout << wrongAnimal->getType() << ": ";
	wrongAnimal->makeSound();
	std::cout << wrongCat->getType() << ": ";
	wrongCat->makeSound();
	std::cout << DEFAULT;

	delete wrongCat;
	delete wrongAnimal;

	return 0;
}

