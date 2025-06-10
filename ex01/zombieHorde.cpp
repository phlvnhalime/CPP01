/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:45:03 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 15:45:04 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    
    Zombie *zombieHorde;
    int i;

    zombieHorde = new Zombie[N];
    for (i = 0; i < N; i++){
        zombieHorde[i] = Zombie(name);
    }

    return (zombieHorde);
}