/* In run time polymorphism.
Here, we override the functions or method which initially present in base class.
Run time polymorphism achived by inheriting by base class*/

#include<iostream>
using namespace std;
class Animal{
    public:

    virtual void sound(){
        cout<<"Animal makes sound! "<<endl;
    }
};

class Dog : public Animal{
    public:

    /*Here, ovrride keyword is totally optional. It only gives the clearity, you are overriding the function or method*/

    void sound() override{
        cout<<"Dogs Barks!"<<endl;
    }
};

class Cat : public Animal{
    public:

    void sound() override{
        cout<<"Cats meowssss....."<<endl;
    }
}; 
int main(){
    Dog d;
    d.sound();

    Cat c;
    c.sound();

    return 0;
}