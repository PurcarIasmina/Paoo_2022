#include<iostream>
#ifndef CAR_H_
#define CAR_H_
class Car
{
    public:
    int doors;
    int seats;
    std::string color;
    int power;
    Car():doors(4), // item 4
         seats(5),
         color("Black"),
         power(136)
   {std::cout<<"Unparameterized car constructor called"<<std::endl;};

    Car(int doors, int seats, std::string color, int power):doors(doors),
                                      seats(seats),
                                      color(color),
                                      power(power)
    {std::cout<<"Parameterized car constructor called"<<std::endl;};

    Car(const Car &c)
    {
         
        std::cout<<"Copy constructor called"<<std::endl;
        this->color = c.color;
        this->power = c.power;
    }
    
    Car& operator = (const Car &c)
    {
        if(this== &c)//item11
        {
           std::cout<<"Self!"<<std::endl;
           return *this;
        }
        std::cout<<"Copy assignment operator called"<<std::endl;
        this->color = c.color;
        this->power = c.power;
        return *this;

    }

       Car& operator += (const Car &c)//item10
    {
        if(this==&c)
        {
            std::cout<<"Self"<<std::endl;
            return *this;
        }
        std::cout<<"Copy assignment +operator called"<<std::endl;
        this->color += c.color;
        this->power += c.power;
        return *this;

    }
    int getPower()
    {
        return this->power;
    }

    void setPower(int p)
    {
        this->power=p;
    }
    
    std::string getColor()
    {
        return this->color;
    }

    void driveCar()
    {
        std::cout<<"Vrum vrum"<<std::endl;
    }

    virtual void changeColor(std::string Color) //item 6
    {
        std::cout<<"Color changed to:"<<Color<<std::endl;
        this->color=Color;
    }
    
    ~Car()
    {
        std::cout<<"Car destructor called"<<std::endl;
    }
};
#endif