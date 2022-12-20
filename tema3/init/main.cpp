#include <iostream>
#include "Car.cpp"
#include "Door.cpp"
#include "LockDoor.cpp"
#include <memory>
Car *createCarInstance() // factory function, functie care creeaza obiectul, incapsulare a procesului de a crea obiecte
{
    return (new Car);
}


int main()
{   //item 13
    std::cout<<"1 => auto_ptr"<<std::endl;
    {
        std::auto_ptr<Car> c1(createCarInstance());
        // auto_ptr nu se mai foloseste, este deprecated, vom avea si un warning in acest sens.
        // In locul lui se foloseste unique_ptr. Am pus un exp si cu auto_ptr pentru a sublinia modelul prezentat in carte.
        // c1 pointeaza catre obj-ul returnat de createCarInstance
        c1->printColor();
        std::auto_ptr<Car> c2(c1); // c2 pointeaza acum catre obj, iar c1 devine null (schimbare de ownership)
        c2->printColor();
        //c1->printColor(); // SEGEMENTATION FAULT pt ca c1 este null
        
    }
    std::cout<<std::endl;
    std::cout<<"2 => unique_ptr"<<std::endl;
    {
        std::unique_ptr<Car> c3(createCarInstance());
        c3->printColor();
        //std::unique_ptr<Car> c4(c3); // nu se poate la unique_ptr sa copiem
        std::unique_ptr<Car> c4=move(c3); // schimbare ownership prin functia move
        c4->printColor();
        //c3->printColor(); //SEGMENTATION FAULT
    }
    std::cout<<std::endl;
    std::cout<<"3 => shared_ptr"<<std::endl;
    {
        std::shared_ptr<Car> c1(createCarInstance());
        c1->printColor();
        std::cout<<"count="<<c1.use_count()<<std::endl; // nr de instante
        std::shared_ptr<Car> c2(c1); // putem copia cu shared_ptr si se va incrementa un counter care ne spune nr de copii ale obj-ului
        //obj-ul se distruge cand counter-ul=0
        // ambii pointeri pointeaza catre acelasi obj
        std::cout<<"count="<<c1.use_count()<<std::endl; 
        c2->printColor();
        c1->printColor();
        std::shared_ptr<Car> c3=move(c1);//schimbare de ownership
        std::cout<<"count="<<c1.use_count()<<std::endl; // nu mai este owner ul resursei -> 0
        std::cout<<"count="<<c3.use_count()<<std::endl; // a devenit owner ul resursei -> 2
        c3->changeColor("Red");
        c3->printColor();
        c2->printColor();
        //c1->printColor(); // SEGMENTATION FAULT

        //item 14
        Door d(12,"Black");
        d.checkIsLocked(); // initial locked este setat pe false
        LockDoor *ld = new LockDoor(d);//locked->true, blocheaza resursa door
        std::cout<<"Before deleting:";
        d.checkIsLocked();
        delete ld;//locked->false, deblocheaza resursa door
        std::cout<<"After deleting:";
        d.checkIsLocked();

        

    }
    return 0;
}