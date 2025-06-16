/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:44:54 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/16 12:14:33 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string strName;
    public:
        //Constructor
        Zombie(void);
        Zombie(std::string strName);
        //Destructor
        ~Zombie(void);
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
