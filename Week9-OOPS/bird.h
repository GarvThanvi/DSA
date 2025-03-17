#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>

class Bird{
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
};

class sparrow: public Bird{
    private:
    void eat(){
        std :: cout << "Sparrw is earting" << std :: endl;
    }
    void fly(){
        std::cout<<"Sprrw is flying" << std :: endl;
    }
};

class eagle: public Bird{
    private:
    void eat(){
        std :: cout << "eagle is earting" << std :: endl;
    }
    void fly(){
        std::cout<<"eagle is flying" << std :: endl;
    }
};

#endif
