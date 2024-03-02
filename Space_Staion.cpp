#include "Space_Staion.hpp"
#include <iostream>
    void Space_Station:: Set_volume_germetic_otsec(){
        int s;
        std::cout << "Введите пожалйста объем герметичных отсеков: ";
        std::cin >> s;
        volume_germetic_otsec = s;
    }

    void Space_Station::Get_volume_germetic_otsec(){
        std::cout << volume_germetic_otsec;
    }

    void Space_Station::Get_height(){
        std::cout << height_orbit;

    }

    void Space_Station::Set_height(){
        int f;
        std::cout << "Введите высоту орбиты: ";
        std::cin >> f;
        height_orbit =f;
    }
    void Space_Station::Set_Solar_Pan(){
        std::string answer;
        while(answer != "yes" || answer != "no"){
        std::cout << "Ваш корабль имеет солнечные панели? (yes or no) :";
        std::cin >> answer;
        if(answer == "yes"){
            availability  = true;
            break;
        }
        else if(answer == "no"){
            availability = false;
            break;
        }

        else {
            std::cout << "Error!!!";
        }
        }
    }
    bool Space_Station::solar_panels(){
        return availability;
    }

    bool Space_Station::Space_Station::DAnger() {
        return false;
    }
