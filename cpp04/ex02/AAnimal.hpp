/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:44:49 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 17:10:06 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"
#define GREEN	"\033[1;32m"
#define CYAN	"\033[0;36m"
#define RED 	"\e[0;31m"

class AAnimal{
    protected :
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal&other);
        AAnimal&operator=(const AAnimal&other);
        virtual ~AAnimal();

        virtual void makeSound()const = 0;
        const std::string &getType()const;
};

#endif