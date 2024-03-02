#include "Quassar.hpp"
#include <iostream>

Quassar::Quassar(){
	std::cout<<"Введите энергию испускаемую Квазаром за время t:"<<" ";
	std::cin>>Quasenergy;
	std::cout<<std::endl;
	std::cout<<"Введите время t:"<<" ";
	std::cin>>Quastime;
    while (Quasenergy/Quastime <= Maxstarlumin()){
        std::cout<<"YOUR GALAXY STILL HAVE A QUASSAR WITH LESS POWERFUL SO CHOOSE ANE PARAMETRES"<<std::endl;
        std::cout<<"FOR EXAMPLE: "<<"Energy: "<<10*Maxstarlumin() + 0.1<<" "<<"time: "<<"10"<<std::endl;
        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
        std::cin >> Quasenergy;
        std::cout << "Укажите также это время t: ";
        std::cin >> Quastime;
        std::cout << "Спасибо\n";
    }
    quascount = quascounter;
        if (quaslumin == nullptr)
             quaslumin = new float[quasnumelements];
        if (quascounter == quasnumelements){
                float* energy = new float [quasnumelements*2];
                for (unsigned int i = 0; i < quasnumelements; i++)
                        energy[i] = quaslumin[i];
                delete[] quaslumin;
                quaslumin = energy;
                quasnumelements *= 2;
        }
        quaslumin[quascount] = Quasenergy / Quastime;
        std::cout << "Светимость = " << quaslumin[quascount]<<std::endl;
        quascounter+=1;
    }
void Quassar::Get_luminosity(){
    std::cout << quaslumin[quascount] << std::endl;
}

bool Quassar:: DAnger() {
    return false;
}
void Quassar::Typeobject(){
     std::cout<<"This spaceobject name is Quassar"<<std::endl;
}

bool Quassar:: Danger() {
    return true;
}


