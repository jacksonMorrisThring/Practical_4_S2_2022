#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "Person.h"
#include <string>

class Airplane : public Person{
// a pilot and copilot must be provided when creating an airplane
public:
    std::string callsign;
    Person Pilot;
    Person CoPilot;
    
    
    Airplane(std::string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      // change the pilot
    Person getPilot();
    void setCoPilot(Person theCoPilot);  // change the co-pilot
    Person getCoPilot();
    void printDetails();                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.
};
#endif