#include "Capybara.h"
#include "Wagon.h"

int main(){
    Wagon w;
    Capybara c1;
    c1.setName("Pat");
    Capybara c2;
    c1.setName("Dan");
    Capybara c3;
    c1.setName("Sam");
    Capybara c4;
    c1.setName("Peter");
    Capybara c5;
    c1.setName("Jackop");

    w.addCapybara(c1);
    w.addCapybara(c2);
    w.addCapybara(c3);
    w.addCapybara(c4);
    w.addCapybara(c5);


    return 0;
}