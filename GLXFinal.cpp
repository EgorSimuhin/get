#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class SpaceObject{

public:

    virtual bool DAnger()= 0;
    //virtual void T
};






class Planet : public SpaceObject{
private:
    float luminosity;
protected:
    int tempurature;
    int massa;
    int radius;


public:
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
        std::cout << radius <<std::endl;
    }

    bool DAnger() {
        return false;
    }

    void Set_Temp(int T){
        tempurature = T;
    }

    void Get_Temp(){
        std::cout << tempurature << std::endl;
    }
    void Typeobject(){
         std::cout<<"This spaceobject name is Planet"<<std::endl;
    }


};

class StarQuass: public Planet {
protected:
	static float* starlumin;
	static unsigned int starcounter;
	static unsigned int starnumelements;
	static float* quaslumin;
	static unsigned int quascounter;
	static unsigned int quasnumelements;
public:
	 float Maxstarlumin(){
		float maxlumin = 0.0;
		if (starlumin == nullptr)
			return 0.0;
		for (unsigned int i = 0; i < starcounter; i++){
			if (starlumin[i] > maxlumin)
				maxlumin = starlumin[i];
		}
		return maxlumin;
	}
	float Minqueslumin(){
		if (quaslumin == nullptr)
			return 0.0;
		float minlumin = quaslumin[0];
		for (unsigned int i = 0; i < quascounter; i++){
			if (quaslumin[i] < minlumin)
				minlumin = quaslumin[i];
		}
		return minlumin;
	}
	~StarQuass(){
		delete[] starlumin;
		delete[] quaslumin;
	}
};
float* StarQuass::starlumin = nullptr;
unsigned int StarQuass::starcounter = 0;
unsigned int StarQuass::starnumelements = 10;
float* StarQuass::quaslumin = nullptr;
unsigned int StarQuass::quascounter = 0;
unsigned int StarQuass::quasnumelements = 10;



class Star : public StarQuass {
private:
	float Energy;
    float time;
	unsigned int starcount;
public:
    Star(){
	starcount = StarQuass::starcounter;
        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
        std::cin >> Energy;
        std::cout << "Укажите также это время t: ";
        std::cin >> time;
        std::cout << "Спасибо\n";
	while (Energy/time >= Minqueslumin()){
		std::cout<<"YOUR GALAXY STILL HAVE A QUASSAR WITH LESS POWERFUL SO CHOOSE ANE PARAMETRES"<<std::endl;
		std::cout<<"FOR EXAMPLE: "<<"Energy: "<<10*Minqueslumin() - 0.1<<" "<<"time: "<<"10"<<std::endl;
        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
        std::cin >> Energy;
        std::cout << "Укажите также это время t: ";
        std::cin >> time;
        std::cout << "Спасибо\n";
	}
	starcount = StarQuass::starcounter;
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
    void Get_luminosity(){
    std::cout << starlumin[starcount] << std::endl;
    }

bool DAnger() {
    return false;
}
void Typeobject(){
     std::cout<<"This spaceobject name is Star"<<std::endl;
}
void Getmaximum(){
	std::cout<<"Maximum star's luminosity:"<<" "<<Maxstarlumin();
}
};

class Quassar : public StarQuass{
private:
	float Quasenergy;
	float Quastime;
	unsigned int quascount;
public:
Quassar(){
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
void Get_luminosity(){
    std::cout << quaslumin[quascount] << std::endl;
}

bool DAnger() {
    return false;
}
void Typeobject(){
     std::cout<<"This spaceobject name is Quassar"<<std::endl;
}

bool Danger() {
    return true;
}
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


class Blackholes : public SpaceObject{
protected:
    
    
    int rg;
    
    int c; 
    
    float G = 6.67 * pow(10, -11); 
    
    int Mass;
    
    int D;//диаметр нашей дыры;
    
    string  location;// расположение нашей черной дыры Мичела
    
    
    
    
    void equation(){ //находим гравитационный радиус rg;
        std::cout<<"Введите массу";

        std::cin >> Mass;

        std::cout<<"thank you!";


        std::cout<<"Тогда можем посчитать радиальную величину гравитационного расположения:";


        rg = 2* G * Mass / pow(c, 2);

        std::cout << rg;


    }
    

};






// Млечный Путь вращается вокруг сверхмассивной чёрной дыры;
class Spacerotation: public SpaceObject{


protected: 
int Mass; //масса черной дыры


int V;//скорость дыры в млечном пути


int V1;//скорость вокруг центра вселенной;

bool k = true; //коэффициент правдивости расположения черной дыры(вне или внутри млечного пути)


bool comparison(){
    if (V < V1){
        return true;//располагается внутри млечного пути
    }
    else
        return false;//вне млечного пути;
    
}


};




//расчет полученной мощности сигнала от Вояджера 1;
class Voyadger1 : public SpaceObject{


protected:

float M;//масса Земли;
float P;//потребляемая мощность;

float Prx; 

float Ptx;

float Gtx;

float r;

float Grx;


//
//
//
//--------------------------------
//
//
void Signal(){
    std::cout<<"сейчас мы рассчитаем получаемую мощность сигнала Вояджера 1, который был запущен пятого сентября 1977";

    std::cout<<"введите мощность, передаваюмую Voyadger:";
    std::cin>>Ptx;

    std::cout<<"Введите коэффициент усиления передающей антенны(по сравнению с изотропной):";
    std::cin>>Gtx;

    std::cout<<"Введите радиус пр-ва:";
    std::cin>>r;

    float Lfs = 1 / (pow(r, 2));
    
    std::cout<<"Введите коэффициент усиления приемной антенны Земли(по сравнению с изотропным):";
    std::cin>>Grx;


    Prx = Ptx + Gtx - Lfs + Grx;

    std::cout<<Prx;
}

};

//
//
//
//
//
//
//
//
//--------------------------------------------------
//



//класс телескоп Хаббл;
class Habbl: public Blackholes, public Voyadger1{


protected:
 float H;//высота


 float R;//радиус Земли;

 float speed_V;//скорость Хаббла

void SpeedHabbl(){






    std::cout<<"Введите высоту полета телескопа:";

    std::cin>>H;
    
    speed_V = sqrt(G * M / (R+H));

    std::cout<<"получаем скорость:\n";
    std::cout<<speed_V;



}



};





//класс Галактики Андромеды и ее свойства:
class Andromeda: public Blackholes, public Voyadger1, public Habbl{

protected:
int T;
int N; //колл-во звезд в галлактике
int V_Andromedy;

float R_z; //расстояние до Земли;

void andr(){
    std::cout<<"Введите расстояние до Земли:";

    std::cin>>R_z;
    std::cin>>V_Andromedy;//скорость Андромеды

    std::cout<<"Теперь найдем время столкновения Млечного пути ";

    T = R_z / V_Andromedy;  

    std::cout<<"наши галлактики столкнуться через:"<< T;
}
};

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
