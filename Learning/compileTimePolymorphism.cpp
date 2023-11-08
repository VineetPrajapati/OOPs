/*Compile time polymorphism.
Here, with same name function is ovrloaded by their arguments (passed in the function or method)*/
#include<iostream>
using namespace std;

class Calculate{
    public:
    
    int add(int a, int b){
        return a+b;
    }
/*Here function is overloaded by it's arguments*/
    double add(double a, double b){
        return a+b;
    }
};
int main(){

    Calculate c;
    cout<<"Add two numbers : "<<c.add(4,5)<<endl;
    cout<<"Add two numbers : "<<c.add(4.5, 5.0);

    return 0;

}