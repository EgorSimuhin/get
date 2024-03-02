#include "Astronaut.hpp"
#include <iostream>
#include "SpaceShip.hpp"

Astronaut::Astronaut(){
	if (Spaceship::counter == 0){
		std::cout<<"к сожалению в данный момнет не имеется кораблей для транспортировки космонавта на орбите"<<std::endl;
		return;
	}
        name = new char[10];
        std::cout<<"Введите имя космонавта: ";
        std::cin >> name;
        std::cout<<std::endl;
        std::cout<<"Выберите название корабля из следующего списка: "<<std::endl;
        Spaceship::Outlistspaceship();
        std::cout<<"Введите цифру от 0 до "<<Spaceship::counter - 1<<std::endl;
        std::cin >> number;
        if (countplace == nullptr){
            countplace = new int[Spaceship::counter];
            for (int i = 0; i < Spaceship::counter; i++)
                countplace[i] = 0;
        }
        while (number > Spaceship::counter){
            std::cout<<"Такого номера нет в списке, попробуйте ещё раз"<<std::endl;
            std::cin >> number;
            if (countplace[number] == 3){
                std::cout<<"Мест на корабле нет, попоробуйте ещё раз"<<std::endl;
                std::cin >> number;
            }
        }
        crew[3*number+countplace[number]] = name;
        countplace[number]++;
    }
    bool Astronaut::DAnger() {
        return false;
    }
    void Astronaut::Outputaustlist(){
        std::cout<<"Список экипажа на кораблях:"<<std::endl;
        for (int i = 0; i < Spaceship::counter; i++){
            for (int j = 0; j < 10; j++)
                std::cout<<Spaceship::name[i][j];
            std::cout<<": ";
            std::cout<<countplace[i];
            std::cout<<" ";
            for (int j = 0; j < countplace[i]; j++){
                for (int k = 0; k < 10; k++)
                    std::cout<<crew[3*i+j][k];
                std::cout<<" ";
            }
            std::cout<<std::endl;
        }
    }
    void Astronaut::Outputaust(){
        std::cout<<"Экипаж корабля косманавта: ";
        for (int j = 0; j < 10; j++)
            std::cout<<Spaceship::name[number][j];
        std::cout<<": ";
        std::cout<<countplace[number];
        std::cout<<" ";
        for (int j = 0; j < countplace[number]; j++){
            for (int k = 0; k < 10; k++)
                std::cout<<crew[3*number+j][k];
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
Astronaut:: ~Astronaut(){
        delete[] name;
        delete[] crew;
    }
    void Astronaut::Astroname(){
        std::cout<<"Имя косманавта: ";
        for (int i = 0; i < 10; i++)
            std::cout<<name[i];
        std::cout<<std::endl;
    }
char** Astronaut::crew = new char*[90];
int* Astronaut::countplace = nullptr;

