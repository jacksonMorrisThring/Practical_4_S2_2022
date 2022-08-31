#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
public: 
    std::string name;
    int salary;

    // Constructor
    Person();
    Person(int salary, std::string name);
    // Functions
    void setName(std::string capyName);   // change the capybara's name
    std::string getName();
    void setSalary(int capyAge);        // change the capybara's age
    int getSalary();
};

#endif