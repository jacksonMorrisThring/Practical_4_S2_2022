#include "Airplane.h"
#include "Person.h"
#include <string>
#include <iostream>


Airplane::Airplane(std::string callsign, Person thePilot, Person theCoPilot){
    this -> callsign = callsign;
    Pilot = thePilot;
    CoPilot = theCoPilot;
}

void Airplane::setPilot(Person thePilot){
    Pilot = thePilot;
}      // change the pilot
Person Airplane::getPilot(){
    return Pilot;
}
void Airplane::setCoPilot(Person theCoPilot){
    CoPilot = theCoPilot;
}  // change the co-pilot
Person Airplane::getCoPilot(){
    return CoPilot;
}
void Airplane::printDetails(){
    std::cout << this -> callsign << std::endl;
    std::cout << this -> Pilot.getName() << std::endl;
    std::cout << this -> CoPilot.getName() << std::endl;
}