#include <iostream>
using namespace std;

class vehicle {
public:
   vehicle( ) { 
        cout << "I am a vehicle" << endl;
    }
};

class fourWheeler : public vehicle {
public:
    fourWheeler( ) { 
        cout << "I have four wheels" << endl;
    }
};

class car : public fourWheeler {
public:
   car() {
        cout << "I am a car" << endl;
    }
};

int main() {
    car myCar;
    return 0;
}