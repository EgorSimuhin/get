#pragma once

#include "StarQues.hpp"

class Star : public StarQuass {
private:
	float Energy;
    	float time;
	unsigned int starcount;
public:
    Star();
    void Get_luminosity();
    bool DAnger(); 
    void Typeobject();
    void Getmaximum();
};
