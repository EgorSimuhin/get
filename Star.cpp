#include "Star.hpp"
#include "StarQues.hpp"
#include <iostream>
Star::Star(){
	starcount = StarQuass::starcounter;
        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
        std::cin >> Energy;
        std::cout << "Укажите также это время t: ";
        std::cin >> time;
        std::cout << "Спасибо\n";
	if (StarQuass::quaslumin != nullptr){
	while (Energy/time >= Minqueslumin()){
		std::cout<<"YOUR GALAXY STILL HAVE A QUASSAR WITH LESS POWERFUL SO CHOOSE ANE PARAMETRES"<<std::endl;
		std::cout<<"FOR EXAMPLE: "<<"Energy: "<<10*Minqueslumin() - 0.1<<" "<<"time: "<<"10"<<std::endl;
        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
        std::cin >> Energy;
        std::cout << "Укажите также это время t: ";
        std::cin >> time;
        std::cout << "Спасибо\n";
	}
	}
	starcount = starcounter;
	if (starlumin == nullptr)
		starlumin = new float[starnumelements];
	if (starcounter == starnumelements){
		float* energy = new float [starnumelements*2];
		for (unsigned int i = 0; i < starnumelements; i++)
			energy[i] = starlumin[i];
		delete[] starlumin;
		starlumin = energy;
		starnumelements *= 2;
	}
        starlumin[starcount] = Energy / time;
        std::cout << "Светимость = " << starlumin[starcount]<<std::endl;
	starcounter+=1;
    }
void Star::Get_luminosity(){
    std::cout << StarQuass::starlumin[starcount] << std::endl;
    }

bool Star::DAnger() {
    return false;
}
void Star::Typeobject(){
     std::cout<<"This spaceobject name is Star"<<std::endl;
}
void Star::Getmaximum(){
	std::cout<<"Maximum star's luminosity:"<<" "<<Maxstarlumin();
}


