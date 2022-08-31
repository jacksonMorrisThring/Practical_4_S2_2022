#include <string>
#include "Capybara.h"

// Constructor
Capybara::Capybara(){
    name = "?";
    age = 0;
}                     
    
    // Functions
void Capybara::setName(std::string capyName){
    name = capyName;
}   
std::string Capybara::getName(){
    return name;
}
void Capybara::setAge(int capyAge){
    age = capyAge;
}        
int Capybara::getAge(){
    return age;
}