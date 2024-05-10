/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:56:34 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 17:03:29 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << MAGENTA <<  "Default WrongCat constructor called" << DEFAULT << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other){
    std::cout << MAGENTA << "WrongCat copy constructor called" << DEFAULT << std::endl;
    this->type = other.type;
}

WrongCat & WrongCat::operator=(const WrongCat &other){
    std::cout << MAGENTA <<  "WrongCat assignement operator called" << DEFAULT << std::endl;
    if(this != &other){
        this->type = other.type;
    }
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << MAGENTA <<  "WrongCat destructor called" << DEFAULT << std::endl;
}

void WrongCat::makeSound()const{
    std::cout << MAGENTA <<  "prrr prrr 😻" << DEFAULT << std::endl;
}
