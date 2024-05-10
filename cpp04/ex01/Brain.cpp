/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:38:01 by schennal          #+#    #+#             */
/*   Updated: 2024/05/10 18:56:56 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; i++){
        ideas[i] = "Default";
    }
    std::cout << MAGENTA << "Default Brain constructor called" << DEFAULT << std::endl;
}

Brain::Brain(const Brain &other){
    for (int i = 0; i < 100; i++){
        ideas[i] = other.ideas[i];
    }
    std::cout << MAGENTA << "Default Brain copy constructor called" << DEFAULT << std::endl;
}

Brain &Brain::operator=(const Brain &other){
    std::cout << "Default Brain assignment constructor called" << DEFAULT << std::endl;
    if (this != &other){
        for (int i = 0; i < 100; i++){
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(){
    std::cout << MAGENTA << "Default Brain destructor called" << DEFAULT << std::endl;
}

void Brain::setIdea(int i, const std::string &idea){
    ideas[i] = idea;
}

const std::string &Brain::getIdea(int i) const{
    return ideas[i];
}