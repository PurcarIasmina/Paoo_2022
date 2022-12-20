#include<iostream>
#include "Door.cpp"
//item14

void lock(Door &d)// pt a anunta ca resursa door este blocata de catre lockdoor si nu poate fi folosita
{   std::cout<<"Locking door,it cannot be used"<<std::endl;
    d.setLocked(true);
}

void unlock(Door &d)// pt a anunta ca resursa door a fost eliberata de catre lockdoor si poate fi folosita
{   std::cout<<"Unlocking door, it can be used"<<std::endl;
    d.setLocked(false);
}
class LockDoor //class to manage the locks
{
    private:
    Door &door;
    public:
    LockDoor(Door &d): // in constructor facem usa locked
    door(d)
    {
        lock(door);
    }
    
    ~LockDoor() // in destructor facem usa unlocked
    {
        unlock(door);
    }

};