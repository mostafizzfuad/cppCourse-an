#include <bits/stdc++.h>
using namespace std;

class Student {
    public :
    int id;
    double cgpa;

    void display() {
        cout << id << " " << cgpa << endl;
    }

    void setValue(int i, double c) {
        id = i;
        cgpa = c;
    }
};

int main() {

    Student Mostafizur; // Mostafizur is an object of Student class
    Mostafizur.setValue(247, 3.50);
    Mostafizur.display(); // access class function(display) using object(Mostafizur)

    Student Siam;
    Siam.setValue(102, 3.65);
    Siam.display();

}