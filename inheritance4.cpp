#include <iostream>
using namespace std;
class A {
public:
    void display() {
        cout << "This is class A." << endl;
    }
};
class B : public A {
public:
    void display() {
        A::display();
        cout << "This is class B." << endl;
    }
};
class C : public B {
public:
    void display() {
        B::display();
        cout << "This is class C." << endl;
    }
};
int main() {
    C myObject; 
    myObject.display();  
    return 0;
}