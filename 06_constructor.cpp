#include <bits/stdc++.h>
using namespace std;

class Student {
    public :
    int id;
    double cgpa;

    void display() {
        cout << id << " " << cgpa << endl;
    }

    // constructor : it's a special type of function that is used to initialize the object. 
    // constructorName same as className 
    // constructor has no return type
    // its call automatically
    // constructor types : default constructor, parameterized constructor
    Student(int i, double c) { // parameterized constructor
        id = i;
        cgpa = c;            
    }

    Student() { // default constructor
        cout << "Hello BD !!" << endl;
    }

    // constructor overloading : using multiple same constructorName but its parameter different
};

int main() {

    Student Mostafizur(247, 3.50); // called parameterized constructor
    Mostafizur.display();

    Student Siam(102, 3.65); // called parameterized constructor
    Siam.display();

    Student Junnun; // called default constructor

}