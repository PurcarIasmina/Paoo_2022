#include<iostream>
//item 14
#ifndef DOOR_H_
#define DOOR_H_
class Door
{
    public:
    int number;
    std::string color;
    bool locked = false;
    Door():number(1),  //constructor neparametrizat
         color("Brown")
   {std::cout<<"Unparameterized door constructor called"<<std::endl;};

    Door(int number, std::string color):number(number), //constructor parametrizat
                                       color(color)     
    {std::cout<<"Parameterized door constructor called"<<std::endl;};

    Door(const Door &d) //copy constructor
    {
        std::cout<<"Copy constructor called"<<std::endl;
        this->number = d.number;
        this->color= d.color;
    }
    
    Door& operator = (const Door &d)//copy assignment operator
    {
        std::cout<<"Copy assignment operator called"<<std::endl;
        this->number = d.number;
        this->color = d.color;
        return *this;

    }
   
    std::string getColor() //getter a culorii
    {
        return this->color;
    }

    void printColor()//afiseaza culoarea
    {
        std::cout<<this->color<<std::endl;

    }

    int getNumber()//getter a numarului
    {
        return this->number;
    }

    void changeColor(std::string Color) //setter a culorii
    {
        std::cout<<"Color changed to:"<<Color<<std::endl;
        this->color=Color;
    }

    void setLocked(bool locked) // seteaza resursa door 
    {
        this->locked=locked;
    }
  
    void checkIsLocked()// functie pt a afla daca usa este blocata de catre alt proces sau nu
    {
        if(this->locked)
            std::cout<<"The door is locked"<<std::endl;
        else
            std::cout<<"The door is unlocked"<<std::endl;
    }
    ~Door()//destructor
    {
        std::cout<<"Door destructor called"<<std::endl;
    }
   
};
#endif