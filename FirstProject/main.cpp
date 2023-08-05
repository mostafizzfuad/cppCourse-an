#include <iostream>
using namespace std;
#include "firstclass.h"
int main() {

    // FirstClass ob;
    // ob.display();

    FirstClass ob;
    FirstClass *p = &ob;
    p -> display(); // selection operator

}
