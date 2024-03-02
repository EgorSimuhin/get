#include "StarQues.hpp"
#include <iostream>
float StarQuass::Maxstarlumin(){
	float maxlumin = 0.0;
	if (starlumin == nullptr)
		return 0.0;
	for (unsigned int i = 0; i < starcounter; i++){
		if (starlumin[i] > maxlumin)
			maxlumin = starlumin[i];
	}
	return maxlumin;
}
float StarQuass::Minqueslumin(){
	if (quaslumin == nullptr)
		return 0.0;
	float minlumin = quaslumin[0];
	for (unsigned int i = 0; i < quascounter; i++){
		if (quaslumin[i] < minlumin)
			minlumin = quaslumin[i];
	}
	return minlumin;
}
StarQuass::~StarQuass(){
	delete[] starlumin;
	delete[] quaslumin;
}
float* StarQuass::starlumin = nullptr;
unsigned int StarQuass::starcounter = 0;
unsigned int StarQuass::starnumelements = 10;
float* StarQuass::quaslumin = nullptr;
unsigned int StarQuass::quascounter = 0;
unsigned int StarQuass::quasnumelements = 10;

