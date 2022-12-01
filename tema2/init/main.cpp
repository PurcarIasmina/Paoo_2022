#include <iostream>
#include "Car.cpp"
#include "BMW.cpp"

int main()
{  //item 10
   Car c1;
   std::cout<<"Masina1:"<<c1.getColor()<<" "<<c1.getPower()<<std::endl;
   Car c2(4,5,"Blue",350);
   std::cout<<"Masina2:"<<c2.getColor()<<" "<<c2.getPower()<<std::endl;
   Car c3(4,5,"Red",150);
   std::cout<<"Masina3:"<<c3.getColor()<<" "<<c3.getPower()<<std::endl;

   c1 += c2 += c3;

   std::cout<<"Masina2:"<<c2.getColor()<<" "<<c2.getPower()<<std::endl;
   std::cout<<"Masina1:"<<c1.getColor()<<" "<<c1.getPower()<<std::endl;

   BMW b3(4,5,"Pink",600,"Activated");
   BMW b4(5,5,"Blue",400,"Nactivated");
   BMW b5;
   b3=b4=b5;
   std::cout<<b3.getColor()<<std::endl;;

  //item 11
  Car c4;
  std::cout<<c4.getPower()<<std::endl;
  c4=c1;
  std::cout<<c4.getPower()<<std::endl;
  std::cout<<c1.getPower()<<std::endl;
  c1=c1;
  std::cout<<c1.getPower()<<std::endl;

  //item 12
  BMW b1;
  BMW b2;
  b2.setPower(500);
  b1 = b2;
  std::cout<<b1.getPower()<<std::endl;
}