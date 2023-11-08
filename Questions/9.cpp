// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.
#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string Name;
    int Class;
    int Rollnumber;
    int marks;

    public:

    Student(string n, int c, int r, int m){
        Name = n;
        Class = c;
        Rollnumber=r;
        marks = m;
    }

    string grade(){
        if(marks>=90){
            return "A+";
        }
        else if(marks>=80){
            return "A";
        }
        else if(marks>=70){
            return "B+";
        }
        else if(marks>=70){
            return "B";
        }
        else if(marks>=60){
            return "C";
        }
        else {
            return "D";
        }
    }

    void StudentInformation(){
        cout<<"Name : "<<Name<<endl;
        cout<<"Class : "<<Class<<endl;
        cout<<"Roll Number : "<<Rollnumber<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Grade : "<<grade()<<endl;
    }

};


int main(){
    Student s1 = Student("Vineet", 12, 5, 99);
    Student s2 = Student("Abhiram", 6, 01, 85);
    s1.StudentInformation();
    s2.StudentInformation();
    return 0;
}