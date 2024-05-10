/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:44:46 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 18:46:06 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Defaut"){
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other){
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
}

Animal & Animal::operator=(const Animal &other){
    std::cout << "Animal assignement operator called" << std::endl;
    if(this != &other){
        this->type = other.type;
    }
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()const{
    std::cout << "Animal makeSound() has been called" << std::endl;
}

const std::string &Animal::getType()const{
    return(this->type);
}