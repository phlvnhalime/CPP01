/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:44:29 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/10 15:44:30 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class Weapon{
    private:
        std::string type;
    public:
        Weapon(const std::string &weapon);
        ~Weapon();
        const std::string &getType() const;
        void setType(const std::string &newType);
};
