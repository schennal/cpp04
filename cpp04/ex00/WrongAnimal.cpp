/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:54:52 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 17:56:51 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal_unknown"){
    std::cout << GREEN << "Default WrongAnimal constructor called" << DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout << GREEN << "WrongAnimal copy constructor called" << DEFAULT << std::endl;
    this->type = other.type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other){
    std::cout << GREEN << "WrongAnimal assignement operator called" << DEFAULT << std::endl;
    if(this != &other){
        this->type = other.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << GREEN << "WrongAnimal destructor called" << DEFAULT << std::endl;
}

void WrongAnimal::makeSound()const{
    std::cout << GREEN << "WrongAnimal makeSound() has been called" << DEFAULT << std::endl;
}

const std::string &WrongAnimal::getType()const{
    return(this->type);
}