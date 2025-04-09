/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:44:46 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 17:11:42 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Defaut"){
    std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other){
    std::cout << "AAnimal copy constructor called" << std::endl;
    this->type = other.type;
}

AAnimal & AAnimal::operator=(const AAnimal &other){
    std::cout << "AAnimal assignement operator called" << std::endl;
    if(this != &other){
        this->type = other.type;
    }
    return (*this);
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound()const{
    std::cout << "AAnimal makeSound() has been called" << std::endl;
}

const std::string &AAnimal::getType()const{
    return(this->type);
}