/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:39:52 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 21:47:50 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){
    std::cout << "DEBUG: love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info( void ) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void ){
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;

}
void Harl::error( void ){
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
    // Array of the level name:
    std::string arrayLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // creates an array of pointers to member
    void (Harl::*function[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
    
    // call the corresponding function
    
    for (int i = 0; i <= 4; i++)
    {
        if(arrayLevel[i] == level)
        {
           (this->*function[i])();
            return ;
        }   
    }

    std::cout << "You've chosen an invalid level." << level << ". Harl only complains at: DEBUG, INFO, WARNING, ERROR levels" << std::endl;
}
