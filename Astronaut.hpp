#pragma once
#include "SpaceObject.hpp"
#include <iostream>
class Astronaut : public SpaceObject{
private:
    int number;
    static int* countplace;
    char* name;
    static char** crew;
public:
    Astronaut();
    bool DAnger();
    void Outputaustlist();
    void Outputaust();
    ~Astronaut();
    void Astroname();
};

