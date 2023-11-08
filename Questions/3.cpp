// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
    string name;
    int age;
    string countery;

    public:

    void setname(string n){
        this->name = n;
    }
    void setage(int a){
        this->age = a;
    }
    void setcountery(string c){
        this->countery = c;
    }

    string getname(){
        return this->name;
    }
    int getage(){
        return this->age;
    }
    string getcountery(){
        return this->countery;
    }
};

int main(){
    Person p;
    p.setname("Vineet");
    p.setage(22);
    p.setcountery("India");
    
    cout<<p.getname()<<" is "<<p.getage()<<" old and lives in "<<p.getcountery();

    return 0;
}