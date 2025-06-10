/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:44:54 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 15:44:55 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Zombie {
    private:
        string strName;
    public:
        //Constructor
        Zombie(void);
        Zombie(string strName);
        //Destructor
        ~Zombie(void);
        void announce( void );
};



Zombie* zombieHorde( int N, std::string name );
