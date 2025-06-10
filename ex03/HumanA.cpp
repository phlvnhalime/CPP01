/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:44:04 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 15:44:05 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &ammo) : name(name), weapon(ammo) {}

void HumanA::attack() const{
    std::cout << this->name << " attacks with their" << this->weapon.getType() << std::endl;


}

HumanA::~HumanA() {}
