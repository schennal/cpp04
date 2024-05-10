/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:25:26 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 19:15:52 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():brain(new Brain){
    std::cout << CYAN <<  "Default Cat constructor called" << DEFAULT << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &other): Animal(other){
    brain = new Brain(*other.brain);
    std::cout << CYAN << "Cat copy constructor called" << DEFAULT << std::endl;
    this->type = other.type;
}

Cat & Cat::operator=(const Cat &other){
    std::cout << CYAN <<  "Cat assignement operator called" << DEFAULT << std::endl;
    if(this != &other){
        *brain = *other.brain;
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat(){
    delete brain;
    std::cout << CYAN <<  "Cat destructor called" << DEFAULT << std::endl;
}

void Cat::makeSound()const{
    std::cout << CYAN <<  "meow meow 😻" << DEFAULT << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}