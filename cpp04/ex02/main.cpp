/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:08:38 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 19:26:05 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

	
int main( void )
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;//if shallow copy - cause undefined output
    delete i;

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

	Dog check;
	Dog deepCopy(check);
	std::cout << "check address: " << &check << " deepCopy address: " << &deepCopy << std::endl;

	// 	Dog basic;
	// {
	// 	Dog tmp = basic;
	// }

	// const AAnimal* meta = new AAnimal("Bat");
	// delete meta;
	// std::cout << std::endl;

    return 0;
}