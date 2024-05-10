/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:08:38 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 18:58:33 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
/*
    //there is problem, cant compile as abstract
    const Animal* meta = new Animal("Bat");
	delete meta;
	std::cout << std::endl;
*/
	// testing Brain class
	std::cout << "** test if ideas are deep copy **" << std::endl;
	Dog dog;
	Brain *a = dog.getBrain();

	Cat cat;
	Brain *b = cat.getBrain();

	std::cout << a << std::endl;
	std::cout << b << std::endl;

    // testing deep copy
    Dog dog2;
    dog2 = dog;
    Brain *c = dog2.getBrain();
    std::cout << c << std::endl; // now is the same ideas from dog
    std::cout << a << std::endl;
  


	// from subject
	std::cout << "** tests from subject **" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;

	// testing array of animals
	std::cout << "** test with array of animals **" << std::endl;
	int nbrAnimals = 4;
	Animal *animal[nbrAnimals];
	for (int i = 0; i < nbrAnimals; i++ )
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << "Arrays of Animals created: " << std::endl;
	for (int i = 0; i < nbrAnimals; i++)
			std::cout << "animal[" << i << "]: " << animal[i]->getType() << std::endl;
	for (int i = 0; i < nbrAnimals; i++ )
			delete animal[i];

	return 0;
}
