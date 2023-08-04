#include <bits/stdc++.h>
using namespace std;

class Student {
    public :
    int id;
    double cgpa;
};

int main() {

    Student Mostafizur; // Mostafizur is an object of Student class
    Mostafizur.id = 247; // access class member using object
    Mostafizur.cgpa = 3.50; // access class member using object

    cout << Mostafizur.id << endl;
    cout << Mostafizur.cgpa << endl;

}