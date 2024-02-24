class Asteroid : public SpaceObject{
private:
static int count[7]={0}
char clas;
public:
void creation()
        char f;
        std::cout<<"Input class of your Asteroid:";
        std::cin>>f;
        switch (f)
        case "A":
                count[0]+=1;
        case "B":
                count[1]+=1;
        case "C":
                count[2]+=1;
        case "D":
                count[3]+=1;
        case "E":
                count[4]+=1;
        case "F":
                count[5]+=1;
        case "G":
                count[6]+=1;

bool DAnger() {
    return true;
}
void Get(){
        for (int i = 0; i < 7; ++i)
                std::cout<<count[i]<<" ";
        std::cout<<std::endl;
}

};

