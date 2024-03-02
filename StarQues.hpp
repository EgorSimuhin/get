#pragma once
#include "Planet.hpp"
class StarQuass: public Planet {
public:
	static float* starlumin;
	static unsigned int starcounter;
	static unsigned int starnumelements;
	static float* quaslumin;
	static unsigned int quascounter;
	static unsigned int quasnumelements;
	float Maxstarlumin();
	float Minqueslumin();
	~StarQuass();
};


