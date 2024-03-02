#include "Aster.hpp"
#include <iostream>
asteroid::asteroid() {
	std::cout<<"Input class of you astoroid is from A to T: ";
	std::cin >> type;
	std::cout<<std::endl;
	while (int(type) < 65 || int(type) > 85){
		std::cout<<"Our system don't have this class, please choose other, for example B"<<std::endl;
		std::cin >> type;
	}
        count[int(type) - 65]++;
    }

ateroid:: ~asteroid() {
        count[int(type) - 65]--;
    }
void asteroid::printCount() {
        std::cout << "Count of asteroids by type:" << std::endl;
        for (int i = 0; i < 20; i++) {
            std::cout << "Type " << char(i + 65) << ": " << count[i] << std::endl;
        }
    }
void asteroid::typecount(){
	    std::cout << "Count of asteroid of this class "<<type<<" is "<< count[int(type) - 65] << std::endl;
    }
bool asteroid::DAnger(){
        return true;
}


