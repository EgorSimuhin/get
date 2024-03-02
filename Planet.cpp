#include "Planet.hpp"
#include <iostream>
void Planet::Set_massa(int m){
        massa = m;
    }
void Planet::Get_massa(){
        std::cout << massa << std::endl;
    }
void Planet::Set_radius(int m){
        radius = m;
    }

void Planet:: Get_radius(){
        std::cout << radius <<std::endl;
    }

bool Planet::DAnger() {
        return false;
    }
void Planet:: Set_Temp(int T){
        tempurature = T;
    }
void Planet::Get_Temp(){
        std::cout << tempurature << std::endl;
    }
void Planet::Typeobject(){
         std::cout<<"This spaceobject name is Planet"<<std::endl;
    }


