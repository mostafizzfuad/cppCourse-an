#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    while (1) {

        int guessNumber, randomNumber;
        cin >> guessNumber;

        randomNumber = rand() % 5 + 1;

        if (guessNumber == randomNumber) {
            cout << "You have Won" << endl;
        } else {
            cout << "You have Lost ... Try again !!" << endl;
            cout << "Random number was : " << randomNumber << endl;
        }

    }

}