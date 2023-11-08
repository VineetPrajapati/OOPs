// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;

public:
    void setcompany(string c)
    {
        this->company = c;
    }
    void setmodel(string m)
    {
        this->model = m;
    }
    void setyear(int y)
    {
        this->year = y;
    }

    string getcompany()
    {
        return this->company;
    }
    string getmodel()
    {
        return this->model;
    }
    int getyear()
    {
        return this->year;
    }
};
int main()
{

    Car c;
    c.setcompany("Land Rover");
    c.setmodel("Range Rover");
    c.setyear(2023);

    cout << "Company : " << c.getcompany() << endl
         << "Model : " << c.getmodel() << endl
         << "Year : " << c.getyear() << endl;

    return 0;
}