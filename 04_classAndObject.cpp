#include <bits/stdc++.h>
using namespace std;

class Student {
    public :
    int id;
    double cgpa;

    void display() {
        cout << id << " " << cgpa << endl;
    }
};

int main() {

    Student Mostafizur; // Mostafizur is an object of Student class
    Mostafizur.id = 247; // access class member using object
    Mostafizur.cgpa = 3.50; // access class member using object
    Mostafizur.display(); // access class function(display) using object(Mostafizur)

}