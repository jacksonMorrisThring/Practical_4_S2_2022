#include <string>
#include <iostream>
#include "Wagon.h"
#include "Capybara.h"

Wagon::Wagon(){
    counter = 0;
    size = 4;
    array = new Capybara[4];
}

bool Wagon::addCapybara(Capybara newCapy){
    // std::cout << "attempting to add to wagon, counter: " << counter << std::endl;
    if (counter < 4)
    {
        array[counter] = newCapy;
        counter++;
        return true;
    }

    // std::cout << "Cart full!" << std::endl; 
    return false;

}    // adds a Capybara to the wagon, returns false if full
void Wagon::emptyWagon(){
    for (int i = 0; i < size; i++)
    {
        array[i] = Capybara();
    }
}                     // remove all Capybaras from the wagon
void Wagon::printCapybaras(){
    for (int i = 0; i < size; i++)
    {
        if (array[i].getName() == "?")
        {
            break;
        }
        else{
            std::cout << array[i].getName() << std::endl;
        }
        
        array[i] = Capybara();
    }
}

Wagon::~Wagon(){
    // std::cout << "destroying wagon" << std::endl;
    delete[] array;
}