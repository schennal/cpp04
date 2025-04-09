/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:43:28 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 18:46:24 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        virtual ~Dog();

        virtual void makeSound()const;
        Brain* getBrain() const;
};

#endif
