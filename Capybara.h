#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>

class Capybara{
public: 
    std::string name;
    int age;

    // Constructor
    Capybara();                     // no name or age is required to create a Capybara
    
    // Functions
    void setName(std::string capyName);   // change the capybara's name
    std::string getName();
    void setAge(int capyAge);        // change the capybara's age
    int getAge();
};

#endif