#include <iostream>
using namespace std;
class A {
public:
    void display() { cout << "Class A" << endl; }
};
class B : public A {
public:
    void display() { cout << "Class B" << endl; }
};
class C : public A {
public:
    void display() { cout << "Class C" << endl; }
};
class D : public B, public C {
public:
    void display() { cout << "Class D" << endl; }
};
int main() {
    D objD;
    objD.B::display(); 
    objD.C::display(); 
    objD.display();     
    return 0;
}