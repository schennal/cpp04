/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:43:16 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 16:48:47 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << YELLOW << "Default Dog constructor called" << DEFAULT << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other){
    std::cout << YELLOW << "Dog copy constructor called" << DEFAULT << std::endl;
    this->type = other.type;
}

Dog & Dog::operator=(const Dog &other){
    std::cout << YELLOW << "Dog assignement operator called" << DEFAULT << std::endl;
    if(this != &other){
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog(){
    std::cout << YELLOW << "Dog destructor called" << DEFAULT << std::endl;
}

void Dog::makeSound()const{
    std::cout << YELLOW << "woof woof 🐶" << DEFAULT << std::endl;
}
