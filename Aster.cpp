#include <iostream>
#include <string>
#include <cmath>

class SpaceObject{
    
public:
    
    virtual bool DAnger()= 0;
};

class asteroid: public SpaceObject {
private:
    static int count[20]; // Массив для хранения количества разновидностей астероидов
    char type; // Тип астероида
public:
    asteroid() {
	std::cout<<"Input class of you astoroid is from A to T: ";
	std::cin >> type;
	std::cout<<std::endl;
	while (int(type) < 65 || int(type) > 85){
		std::cout<<"Our system don't have this class, please choose other, for example B"<<std::endl;
		std::cin >> type;
	}
        count[int(type) - 65]++;
    }

    ~asteroid() {
        count[int(type) - 65]--;
    }

    static void printCount() {
        std::cout << "Count of asteroids by type:" << std::endl;
        for (int i = 0; i < 20; i++) {
            std::cout << "Type " << char(i + 65) << ": " << count[i] << std::endl;
        }
    }
    void typecount(){
	    std::cout << "Count of asteroid of this class "<<type<<" is "<< count[int(type) - 65] << std::endl;
    }
bool DAnger(){
        return true;
}
};
int asteroid::count[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
int main(){
	asteroid a1;
	asteroid a2;
	asteroid a3;
	a1.printCount();
	a1.typecount();
}

