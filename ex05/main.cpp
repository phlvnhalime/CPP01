/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:39:57 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 21:23:27 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    Harl harl;
    
    std::cout << "----- Harl's complaints -----" << std::endl;
    std::cout << std::endl;
    
    harl.complain("DEBUG");
    std::cout << std::endl;

    harl.complain("INFO");
    std::cout << std::endl;
    
    harl.complain("WARNING");
    std::cout << std::endl;

    harl.complain("ERROR");
    std::cout << std::endl;

    harl.complain("INVALID");
    std::cout << std::endl;

    // If we test it for the cases sensitivity between uppercase and lowercase

    std::cout << "----- Tested for case sensitivity -----" << std::endl;
    std::cout << std::endl;
    harl.complain("debug");
    std::cout << std::endl;

    harl.complain("info");
    std::cout << std::endl;

    harl.complain("warning");
    std::cout << std::endl;

    harl.complain("error");
    std::cout << std::endl;
    
}