// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

#include<bits/stdc++.h>
using namespace std;

class Circle{
    private:
    double radius;

    public:

    void setradius(double r)
    {
        this->radius = r;
    }

    double getradius(){
        return this->radius;
    }

    void area(){
        cout<<"Area : "<<3.14*radius*radius<<endl;
    }

    void circumference(){
        cout<<"circumference : "<<2*3.14*radius;
    }
};

int main()
{
    Circle c;
    c.setradius(6);
    
    c.area();
    c.circumference();



    return 0;
}