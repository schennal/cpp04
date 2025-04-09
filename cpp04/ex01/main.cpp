/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:08:38 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 19:14:05 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//if shallow copy - cause undefined output
    delete i;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
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

    return 0;
}