//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

#include<bits/stdc++.h>
using namespace std;

class Rectangel{
    private:
    float length;
    float width;

    public:

    void setlength(float l)
    {
        this->length = l;
    }
    void setwidth(float w)
    {
        this->width = w;
    }

    float getlength(){
        return this->length;
    }
    float getwidth(){
        return this->width;
    }

    void Area(){
        cout<<"Area : "<<length*width<<endl;
    }

    void Perimeter(){
        cout<<"Perimeter : "<<2*(length+width)<<endl;
    }


};
int main(){

    Rectangel r;
    r.setlength(10);
    r.setwidth(10);

    r.Area();
    r.Perimeter();

    return 0;
}