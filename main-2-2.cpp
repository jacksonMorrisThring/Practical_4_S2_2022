#include <iostream>
#include "Person.h"
#include "Airplane.h"

int main(){
    Person p1(50000, "TJ");
    Person p2(60000, "AJ");

    Airplane a1("Maverick", p1, p2);

    a1.printDetails();

    return 0;
}