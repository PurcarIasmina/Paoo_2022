#include<iostream>
//item 13
class Car
{
    public:
    int doors;
    int seats;
    std::string color;
    int power;
    Car():doors(4), //constructor neparametrizat
         seats(5),
         color("Black"),
         power(136)
   {std::cout<<"Unparameterized car constructor called"<<std::endl;};

    Car(int doors, int seats, std::string color, int power):doors(doors), //constructor parametrizat
                                      seats(seats),
                                      color(color),
                                      power(power)
    {std::cout<<"Parameterized car constructor called"<<std::endl;};

    Car(const Car &c) //copy constructor
    {
        std::cout<<"Copy constructor called"<<std::endl;
        this->color = c.color;
        this->power = c.power;
    }
    
    Car& operator = (const Car &c) //copy assignment operator
    {
        std::cout<<"Copy assignment operator called"<<std::endl;
        this->color = c.color;
        this->power = c.power;
        return *this;

    }
    int getPower() //returneaza puterea masinii
    {
        return this->power;
    }
    
    std::string getColor() //returneaza culoarea masinii
    {
        return this->color;
    }
    void printColor() //afiseaza culoarea masinii
    {
        std::cout<<this->color<<std::endl;

    }
    void driveCar() 
    {
        std::cout<<"Vrum vrum"<<std::endl;
    }

    void changeColor(std::string Color) // setter a culorii masinii
    {
        std::cout<<"Color changed to:"<<Color<<std::endl;
        this->color=Color;
    }
    
    ~Car() //destructor
    {
        std::cout<<"Car destructor called"<<std::endl;
    }
   
};
