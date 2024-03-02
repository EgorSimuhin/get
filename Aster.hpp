#include "SpaceObject.hpp"


class asteroid: public SpaceObject {
private:
    static int count[20]; // Массив для хранения количества разновидностей астероидов
    char type; // Тип астероида
public:
    asteroid(); 
    ~asteroid(); 
    static void printCount();
    void typecount();
    bool DAnger();
};
