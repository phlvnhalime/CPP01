#pragma once

#include <iostream>
#include <string>

using namespace std;

class Zombie {
    private:
        string strName;
    public:
        //Constructor
        Zombie(void);
        Zombie(string strName);
        //Destructor
        ~Zombie(void);
        void announce( void );
};



Zombie* zombieHorde( int N, std::string name );
