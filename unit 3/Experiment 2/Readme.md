Experiment 2: multiple and hierarchial inheritance


#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is base class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "This is derived class B" << endl;
    }
};

class C : public A {
public:
    void displayC() {
        cout << "This is derived class C" << endl;
    }
};

int main() {
    B obj1;
    C obj2;

    obj1.displayA();
    obj1.displayB();

    obj2.displayA();
    obj2.displayC();

    return 0;
}

