#pragma once
#include "SpaceObject.hpp"

class Space_Station : public SpaceObject{
private:
bool availability;//наличие солнечных панелей;
public:
    int height_orbit;
    int volume_germetic_otsec;
    void Set_volume_germetic_otsec();
    void Get_volume_germetic_otsec();
    void Get_height();
    void Set_height();
    void Set_Solar_Pan();
    bool solar_panels();
    bool DAnger();
};
