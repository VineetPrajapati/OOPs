#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string Name;
    int Age;

public:
    Person(string name, int age)
    {
        this->Name = name;
        this->Age = age;
    }

    void setName(string name)
    {
        this->Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setAge(int age)
    {
        this->Age = age;
    }
    int getAge()
    {
        return Age;
    }
};

class Circle{
    private:
    float radius;
    float area;

    public:
    void getradius(){
        cout<<"Enter the value of radius : "<<endl;
        cin>>radius;
    }
    
    void areaOfCircle(){
        area = 3.14* radius*radius;
        cout<<"Area of circle is "<<area<<endl;
    }
};

class implementAbstraction{
    private:
    int a;
    int b;

    public:
    void set(int x, int y){
        this->a=x;
        this->b=y;
    }

    void display(){
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b;
    }

};

int main()
{

    // implementAbstraction obj;
    // obj.set(10,13);
    // obj.display();

    // Circle circle;
    // circle.getradius();
    // circle.areaOfCircle();

    // Person p("Ram", 35);
    // cout<<p.getName()<< " is "<<p.getAge()<<"years old."; 

}