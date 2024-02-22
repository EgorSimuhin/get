class Galaxys_all(){
	Galaxys_all(){
	}

};

class Milky_Way(): public Galaxys_all{

protected:
	
	int Your_Planet_Number;

	
public:
	void Set_Old() {
		cout << "The age of our galaxy is 13 milliard years";
	}
	

	void Set_Your_Planet_Number (){
		std::cout << "Tell me the number of your planet: ";
		std::cin >> Your_Planet_Number;
		std::cout << \n;
	}
	void Name_of_Planets(){

		switch(Your_Planet_Number) {
		case'1':
			std::cout << "Your planet is Mercury";
			break;
		case'2':
			std::cout << "Your planet is Venus";
			break;
		case'3':
			std::cout << "Your planet is Earth";
			break;
		case'4':
			std::cout << "Your planet is Mars";
			break;
		case'5':
			std::cout << "Your planet is Jupiter";
			break;
		case'6':
			std::cout << "Your planet is Saturn";
			break;
		case'7':
			std::cout << "Your planet is Uranus";
			break;
		case'8':
			std::cout << "Your planet is Neptune";
		default:
			std::cout << "There is no planet with this numder in Solar system!!!";	
		}
	}


};

class Mercury:public Milky_Way{
private:

	bool Live;
	float Me_Radius;
	float Massa;
	float Voluem;
	bool atmoshere;
	bool 
	
public:	
};
class Venus:public Milky_Way{

}; 


class Earth:public Milky_Way{
private:
	
public:


};

class Mars:public Milky_Way{
protrected:


public:


};

class LIVE:public "Name every planets"{


}; //every planets

	   
	   
class Animal:public LIVE {



};



class Rasteni:



