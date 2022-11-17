#include <iostream>
#include "Car.cpp"
#include "BMW.cpp"
#include "Bicycle.cpp"
int main()
{   int a; 
    std::cout<<"a="<<a<<std::endl; //item 4
    Car c;
    Car c2(4,5,"Red",255);
    std::cout<<c.getPower()<<std::endl;
    std::cout<<c2.getPower()<<std::endl;

    c2 = c; // copy assignment operator

    Car cc = c; // copy constructor

    Car *c3= new BMW();
    c3->changeColor("Black"); // -> item 5 (virtual)
    // Car c4(c3);

    BMW c5;
    std::cout<<c5.getSportMode()<<std::endl;
    BMW c6(4,5,"black", 300,"Activated");
    c5 = c6;
    std::cout<<c5.getSportMode()<<std::endl;
   // BMW c7(c6); // deleted ->item 6
    
    Bicycle b; // default constructor -> item 5
    Bicycle b3;
    //b3 = b; private copy assig. operator ->item 6

    
}