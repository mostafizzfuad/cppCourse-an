#include <bits/stdc++.h>
using namespace std;

class Student {

    public :
    const int admissionFee;
    const int examFee;
    int id;
    Student(int a, int e, int i) 
    :admissionFee(a), examFee(e) {
        // when we use const variable, cannot use this two statement
        // admissionFee = a;
        // examFee = e;
        id = i;
        cout << admissionFee << endl;
        cout << examFee << endl;
        cout << id << endl;
    }

};

int main() {

    Student std1(15000, 500, 247);

}