#include <iostream>
#include "Capybara.h"

int main(){
    Capybara c1;

    std::cout << "Name: " << c1.getName() << "   Age: " << c1.getAge() << std::endl;
    c1.setName("John");
    c1.setAge(15);
    std::cout << "Name: " << c1.getName() << "   Age: " << c1.getAge() << std::endl;
    return 0;
}