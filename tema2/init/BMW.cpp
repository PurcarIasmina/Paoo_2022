#include<iostream>
#include "Car.cpp"

class BMW : public Car
{
    private:
    std::string sportMode;
    
    public:
    BMW() : Car(4,5,"Red",300), sportMode("Nactivated")
    {
        std::cout<<"Unparameterized BMW constructor called"<<std::endl;
    }

    BMW(int doors, int seats, std::string color, int power, std::string sportMode) : Car(doors, seats, color, power), sportMode(sportMode)
    {
        std::cout<<"Parameterized BMW constructor called"<<std::endl;
    }

    BMW& operator = (const BMW &c)
    {
        if(this == &c)
        {
            std::cout<<"Self BMW"<<std::endl;
            return *this;
        }
        //Car::operator=(c); //item12
        std::cout<<"BMW Copy assignment operator called"<<std::endl;
        this->color = c.color;
        this->sportMode = "Activated";
        return *this;

    }
   

    BMW(const BMW & b) = delete;
    std::string getSportMode()
    {
        return this->sportMode;
    }

    void setSportMode()
    {
        this->sportMode = "Activated";
    }

    void changeColor(std::string Color)
    {
        std::cout<<"BMW color customized: "<<Color+"Customized"<<std::endl;
        this->color=Color + "Customized";
    }

    void increasePower()
    {
        this->power += 30;
    }
    ~BMW()
    {
        std::cout<<"BMW car destructor called"<<std::endl;

    }
};