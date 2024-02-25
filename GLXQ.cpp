#include <iostream>
#include <string>
#include <cmath>

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
	if (quaslumin != nullptr){
		while (Energy/time >= Minqueslumin()){
			std::cout<<"YOUR GALAXY STILL HAVE A QUASSAR WITH LESS POWERFUL SO CHOOSE ANE PARAMETRES"<<std::endl;
			std::cout<<"FOR EXAMPLE: "<<"Energy: "<<10*Minqueslumin() - 0.1<<" "<<"time: "<<"10"<<std::endl;
		        starcount = StarQuass::starcounter;
                        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
                        std::cin >> Energy;
                        std::cout << "Укажите также это время t: ";
                        std::cin >> time;
                        std::cout << "Спасибо\n";
		}
	}
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
        if (starlumin != nullptr){
                while (Quasenergy/Quastime <= Maxstarlumin()){
                        std::cout<<"YOUR GALAXY STILL HAVE A QUASSAR WITH LESS POWERFUL SO CHOOSE ANE PARAMETRES"<<std::endl;
                        std::cout<<"FOR EXAMPLE: "<<"Energy: "<<10*Maxstarlumin() + 0.1<<" "<<"time: "<<"10"<<std::endl;
                        quascount = quascounter;
                        std::cout << "Введите энергию испускаемую звездой за известное вам время t: ";
                        std::cin >> Quasenergy;
                        std::cout << "Укажите также это время t: ";
                        std::cin >> Quastime;
                        std::cout << "Спасибо\n";
                }
        }	
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

int main(){
	Quassar q1;
	Star s1;
        s1.Set_massa(30000);
        s1.Get_massa();
}
