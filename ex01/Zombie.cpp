/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:44:59 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/16 12:06:11 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->strName = "";
}

Zombie::Zombie(std::string strName){
    this->strName = strName;
}

Zombie::~Zombie(void)
{
    std::cout << this->strName << " Destroyed it!" << std::endl;
}

void Zombie::announce( void ){
    std::cout << this->strName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
