#include <iostream>
#include "Person.h"

int main(){
    Person c1(50000, "TJ");

    c1.setName("John");
    c1.setSalary(150000);
    std::cout << "Name: " << c1.getName() << "   Age: " << c1.getSalary() << std::endl;
    return 0;
}