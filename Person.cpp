#include <string>
#include "Person.h"

// Constructor
Person::Person(){
    name = "?";
    salary = 0;
}   

Person::Person(int salary, std::string name){
    this -> name = name;
    this -> salary = salary;
}
    
    // Functions
void Person::setName(std::string name){
    this -> name = name;
}   
std::string Person::getName(){
    return name;
}
void Person::setSalary(int salary){
    this -> salary = salary;
}        
int Person::getSalary(){
    return salary;
}