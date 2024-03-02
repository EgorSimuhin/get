#pragma once
#include "SpaceObject.hpp"

class Planet : public SpaceObject{
private:
    float luminosity;
protected:
    int tempurature;
    int massa;
    int radius;
public:
    void Set_massa(int m);
    void Get_massa();
    void Set_radius(int m);
    void Get_radius();
    bool DAnger(); 
    void Set_Temp(int T);
    void Get_Temp();
    void Typeobject();
};

