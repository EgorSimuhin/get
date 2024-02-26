#include <iostream>

class SpaceObject{
    
public:
    
    virtual bool DAnger()= 0;
};

class Space_Station : public SpaceObject{
private:
bool availability;//наличие солнечных панелей;

public:
    int height_orbit;
    int volume_germetic_otsec;
    void Set_volume_germetic_otsec(){
        int s;
        std::cout << "Введите пожалйста объем герметичных отсеков: ";
        std::cin >> s;
        volume_germetic_otsec = s;
    }

    void Get_volume_germetic_otsec(){
        std::cout << volume_germetic_otsec;
    }

    void Get_height(){
        std::cout << height_orbit;

    }

    void Set_height(){
        int f;
        std::cout << "Введите высоту орбиты: ";
        std::cin >> f;
        height_orbit =f;
    }
    void Set_Solar_Pan(){
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
    bool solar_panels(){
        return availability;
    }

    bool DAnger() {
        return false;
    }
};


class Spaceship: Space_Station {
private:
    double speed;
    char* namel;
public:
    static char** name;
    static int counter;
    Spaceship() {
        if (counter == 30) {
            std::cout << "Извините больше космических станций расположить невозможно" << std::endl;
            return;
        }
        
        namel = new char[10];
        std::cout << "Введите название корабля (до 10 символов): ";
        std::cin >> namel;
        std::cout << "Введите скорость корабля: ";
        std::cin >> speed;
        name[counter] = namel;
        counter++;
    }

    ~Spaceship() {
        delete[] namel;
    }

    void Outputname() {
        std::cout << "Название этого корабля : ";
        for (int i = 0; i < 10; i++)
            std::cout << namel[i];
        std::cout<<std::endl;
    }

    static void Outlistspaceship() {
        for (int i = 0; i < counter; i++) {
            std::cout<<i<<") ";
            for (int j = 0; j < 10; j++)
                std::cout<<name[i][j];
            std::cout<<std::endl;
        }
    }

};

int Spaceship::counter = 0;
char** Spaceship::name = new char*[30];
class Astronaut : public SpaceObject{
private:
    int number;
    static int* countplace;
    char* name;
    static char** crew;
public:
    Astronaut(){
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
    bool DAnger() {
        return false;
    }
    void Outputaustlist(){
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
    void Outputaust(){
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
    ~Astronaut(){
        delete[] name;
        delete[] crew;
    }
    void Astroname(){
        std::cout<<"Имя косманавта: ";
        for (int i = 0; i < 10; i++)
            std::cout<<name[i];
        std::cout<<std::endl;
    }
};
char** Astronaut::crew = new char*[90];
int* Astronaut::countplace = nullptr;
int main(){
	Spaceship s1;
	s1.Outputname();
	s1.Outlistspaceship();
	Astronaut a1;
	Astronaut a2;
	Spaceship s2;
	Astronaut a3;
	a1.Outputaustlist();
	a1.Outputaust();
}
