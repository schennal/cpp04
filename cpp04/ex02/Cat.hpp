/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:37:57 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 17:15:31 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        virtual ~Cat();

        virtual void makeSound()const;
        Brain* getBrain() const;
};

#endif
