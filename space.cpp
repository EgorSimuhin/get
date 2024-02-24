#include <iostream>
#include <string>
#include <cmath>

class SpaceObject{
    
public:
    
    virtual bool DAnger()= 0;
};



class Asteroid : public SpaceObject{
private:
static int c[7]={0};
char clas;
public:
void creation(int i){
        char f;
        std::cout<<"Input class of your Asteroid:";
        std::cin>>f;
		c[i] = f;
}
bool DAnger() {
    return true;
}
void Get(){
        for (int i = 0; i < 7; ++i)
                std::cout<<c[i]<<" ";
        std::cout<<std::endl;
}

};
int main(){
	Asteroid a1;
	a1.creation(0);
	Asteroid a2;
	a2.creation(1);
	a2.Get();
}