// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.

#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    string name;
    string emp_id;
    int salary;

    public:

    Employee(string n, string id, int s){
        name = n;
        emp_id = id; 
        salary = s;
    }

    void calculate(double performance){
        if (performance>0 && performance<=5){
            salary *= performance;
        }
        else{
            cout<<"Next time perform better!"<<endl;
        }
    }

    

    void setname(int n){
        name = n;
    }
    string getname(){
        return name;
    }

    void setemp_id(string id){
        emp_id = id;
    }

    string getemp_id(){
        return emp_id;
    }

    void setsalary(int s){
        salary = s;
    }

    int getsalary(){
        return salary;
    }
      

};


int main(){

    Employee e = Employee("Abhiram", "ABC123", 15000 );
    cout<<"Employee Name : "<<e.getname()<<endl
    <<"Employee ID : "<<e.getemp_id()<<endl
    <<"Initial Salary : "<<e.getsalary()<<endl;

    double performanceRating = 2;
    e.calculate(performanceRating);
    cout<<"Updated salary "<<e.getsalary();
    return 0;
}