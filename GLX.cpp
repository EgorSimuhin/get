#include <iostream>
#include <string>
#include <cmath>

class SpaceObject{
    
public:
    
    virtual bool DAnger()= 0;
};










class Star : public SpaceObject{
private:
    float luminosity;
protected: 
    int tempurature;
    int massa;
    int radius;
    float Energy;
    float time;


public:
    void Get_luminosity(){
        std::cout << luminosity;
    }
    void Set_luminosity(){
        
        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
        std::cin >> Energy;
        std::cout << "Укажите также это время t: ";
        std::cin >> time;
        std::cout << "Спасибо\n";
        luminosity = Energy / time;
        std::cout << "Светимость = " << luminosity;
    }
    void Set_massa(int m){
        massa = m;
    }
    
    void Get_massa(){
        std::cout << massa << std::endl;
    }

    void Set_radius(int m){
        radius = m;
    }

    void Get_radius(){
        std::cout << radius;
    }

    bool DAnger() {
        return false;
    }

    void Set_Temp(int T){
        tempurature = T;
    }

    void Get_Temp(){
        std::cout << tempurature;
    }

};














class Planet : public Star {
private:

public:
bool DAnger() {
    return false;
}
};













class Moon : public SpaceObject{ // это спутник
private:
double firs_space;
double h;
double R;
double M;
void Firs_Space(){
    firs_space = ((6.67 * pow(10, -7) * M)/(R + h) , 0.5);
}
public:
void Set_h(){
    double f;
    std::cout << "Введите высоту, на которой летает спутник: ";
    std::cin >> f;
    h = f;
}

void Set_R(){
    double e;
    std::cout << "Введите радиус планеты, вокруг которой вращается спутник: ";
    std::cin >> e;
    R = e;
}

void Set_M(){
    double c;
    std::cout << "Введите массу планеты вокруг, которой вращается спутник: ";
    std::cin >> c;
    M = c;
}
void Get_firs_space(){
    std::cout << "Первая космическая скорость равна " << firs_space << std::endl; 
}

bool DAnger() {
    return false;
}
};











class Asteroid : public SpaceObject{



public:
bool DAnger() {
    return true;
}
};










class Comet : public SpaceObject{
private:
float kinenergi;

public:
    
    int period;
    float tempera_ura;
    int U;//скорость
    int mass;
    void Get_rinenergi(){
        kinenergi = (mass * pow(U , 2))/2;
    }
    bool DAnger() {
        return true;
    }
};










class Astronaut : public SpaceObject{ 
public:
    int height;
    int weight;

    bool DAnger() {
        return false;
    }
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

class Spaceship : public SpaceObject{ // космический корабль
public:
bool DAnger() {
    return false;
}
};

class BlackHole : public SpaceObject{ 
public:
bool DAnger() {
    return true;
}
};

class Nebula : public SpaceObject{ //Туманность
public:
bool DAnger() {
    return false;
}
};

class Galaxy : public SpaceObject{
public:
bool DAnger() {
    return false;
}
}; 

class Quassar : public SpaceObject{
public:
bool DAnger() {
    return false;
}
};

class Supernova : public SpaceObject{
public:
bool DAnger() {
    return false;
}
};

class Alien : public SpaceObject{
public:
bool DAnger() {
    return true;
}
};


int main() {
    Space_Station s;
    s.Set_Solar_Pan();
    
    
}