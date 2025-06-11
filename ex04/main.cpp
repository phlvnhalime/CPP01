/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:19:48 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/11 12:20:26 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av){

    if(ac != 4)
    {
        std::cerr << "Usage:" << "<fileName> <s1> <s2>" << std::endl;
        return 1;
    }

    strReply replacer(av[1], av[2], av[3]);
    if(!replacer.processFile())
    {
        std::cerr << "The program can not be successfully!" << std::endl;
        return 1;
    }
    
}