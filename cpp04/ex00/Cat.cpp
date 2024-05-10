/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:25:26 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 17:07:23 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << CYAN <<  "Default Cat constructor called" << DEFAULT << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &other){
    std::cout << CYAN << "Cat copy constructor called" << DEFAULT << std::endl;
    this->type = other.type;
}

Cat & Cat::operator=(const Cat &other){
    std::cout << CYAN <<  "Cat assignement operator called" << DEFAULT << std::endl;
    if(this != &other){
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << CYAN <<  "Cat destructor called" << DEFAULT << std::endl;
}

void Cat::makeSound()const{
    std::cout << CYAN <<  "meow meow 😻" << DEFAULT << std::endl;
}

