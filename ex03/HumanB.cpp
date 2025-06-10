/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:44:11 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 15:44:12 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name): name(name), weapon(NULL){

}

/*
    Or We can do this: 
    HumanB::HumanB(const std::string &name) {
    this->name = name;
    this->weapon = NULL;
}
*/

HumanB::~HumanB(){}

void HumanB::attack() const{

    if(this->weapon)
    {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " has no weapon to attack with!"  << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}