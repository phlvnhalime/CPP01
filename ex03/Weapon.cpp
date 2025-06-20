/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:44:26 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 15:44:27 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*Constructor*/
Weapon::Weapon(const std::string &type) : type(type) {

}

/*
    I can make it also
    Weapon::Weapon(const std::string &type) 
    {
        this->type = type;
    }
*/
/*Destructor*/
Weapon::~Weapon(){

}

const std::string &Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string &newType){
    this->type = newType;
}
