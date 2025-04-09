/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:43:16 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 17:16:42 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():brain(new Brain){
    std::cout << YELLOW << "Default Dog constructor called" << DEFAULT << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other): AAnimal(other){
    brain = new Brain(*other.brain);
    std::cout << YELLOW << "Dog copy constructor called" << DEFAULT << std::endl;
    *this = other;
}

Dog & Dog::operator=(const Dog &other){
    std::cout << YELLOW << "Dog assignement operator called" << DEFAULT << std::endl;
    if(this != &other){
        *brain = *other.brain;
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog(){
    delete brain;
    std::cout << YELLOW << "Dog destructor called" << DEFAULT << std::endl;
}

void Dog::makeSound()const{
    std::cout << YELLOW << "woof woof 🐶" << DEFAULT << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}
