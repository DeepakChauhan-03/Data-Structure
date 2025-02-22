#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overriding base class function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr; 
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->show(); // Calls Derived class's show() function (Run-time polymorphism)

    return 0;
}
