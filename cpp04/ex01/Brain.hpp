/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:38:05 by schennal          #+#    #+#             */
/*   Updated: 2024/05/12 18:45:47 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

#define MAGENTA	"\033[0;35m"

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();

        void setIdea(int i, const std::string &idea);
        const std::string &getIdea(int i) const;
        
};

#endif