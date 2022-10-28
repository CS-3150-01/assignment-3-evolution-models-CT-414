#include <iostream>
#include <string>
using namespace std;

class creature {
    protected: 
        int survivability;
    public:
        string species;
        void die();
        void reproduce();

};

class Lion : public creature {
    int kills;
    int attacks;
    public:
        void roar(){
            cout << "Roar!";
        }
        void attack(){

        }
        void die(){

        }
        void reproduce(){

        }
        int getSurvivability(){
            return kills;
        }
};

class Sheep : public creature {
    int wool;
    public:
        void die(){

        }
        void reproduce(){

        }
        int getSurvivability(){
            return wool;
        }
};

class world {
    creature Creatures[10];
    public:
        void createCreature(){

        }
        void rollSurvival(){

        }
};

int main() {

    return 0;
}