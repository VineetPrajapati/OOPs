// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<bits/stdc++.h>
using namespace std;

class Triangle{
    private:
    double side1;
    double side2;
    double side3;

    public:

    Triangle(double a, double b, double c){
        this->side1 = a;
        this->side2 = b;
        this->side3 = c;
    }

    void TriangleIS(){
        if(side1==side2 && side2==side3){
            cout<<"Equilateral Triangle.";
        }
        else if(side1==side2 || side2==side3 || side1==side3)
        {
            cout<<"Isosceles Triangle.";
        }

        else{
            cout<<"scalene Triangle.";
        }
    }

};
int main(){

    Triangle t = Triangle(6,6,5);
    t.TriangleIS();
    
    return 0;
}