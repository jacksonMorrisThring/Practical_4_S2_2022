#ifndef WAGON_H
#define WAGON_H
#include <string>
#include "Capybara.h"

class Wagon{
public: 
    Capybara* array;
    int size;
    int counter;

    Wagon();

    bool addCapybara(Capybara newCapy);    // adds a Capybara to the wagon, returns false if full
    void emptyWagon();                     // remove all Capybaras from the wagon
    void printCapybaras();

    ~Wagon();
};

#endif