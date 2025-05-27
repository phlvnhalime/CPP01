#pragma once

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string strName;
    public:
        //Constructor
        Zombie(void);
        Zombie(string strName);
        //Destructor
        ~Zombie(void);
        void announce( void );
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );
