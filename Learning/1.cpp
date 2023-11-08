#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
    virtual void askForPromotion() = 0;
};

class Employee
{
private:
    
    int Age;
protected:
string Name;
string Company;

public: // if we not define the access modifier, by default it wil be private
    // function to call the emplyee details

    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }

    int getAge()
    {
        return Age;
    }
    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    void askForPromotion()
    {
        if (Age >= 30)
        {
            cout << Name << ", you will get promoted!";
        }
        else
        {
            cout << Name << " Sorry! we could not promote you.";
        }
        cout << endl;
    }
    //  Constructor
    Employee(string name, string company, int age)

    {
        Name = name;
        Company = company;
        Age = age;
    }


};

class Developer : public Employee
{
    public:
    string favLang;
    Developer(string name, string company, int age, string favLanguage)
        : Employee(name, company, age)

    {
        favLang = favLanguage;
    }

    void fixbug()
    {
        cout << Name << " will fix the bugs using " << favLang<<endl;
    }
};

class Teacher : public Employee{
    public:
    string Subject;

    Teacher(string name, string compamy, int age, string subject ) : Employee (name, compamy, age)
    {
        Subject = subject;
    }

    void lessonPrep(){
        cout<<Name<<" will tech "<<Subject<<" in "<<Company<<"."<<endl;
    }
};


int main()
{
    // Employee employee1;
    // employee1.Name = "vineet";
    // employee1.Company = "software industry";
    // employee1.Age = 22;
    //  employee1.IntroduceYourself();
    // Employee employee2;
    // employee2.Name = "Abhiram";
    // employee2.Company = "software industry";
    // employee2.Age = 29;
    // employee2.IntroduceYourself();

    // Employee employee1 = Employee("Vineet", "Software", 22);
    // Employee employee2 = Employee("Abhiram", "Automobil", 29);
    // Employee employee3 = Employee("Lucky", "Amazon", 35);

    // employee1.IntroduceYourself();
    // employee2.IntroduceYourself();
    // employee3.IntroduceYourself();

    // employee1.setAge(46);
    // cout<<employee1.getName() <<" is "<<employee1.getAge() <<" years old";

    // employee1.askForPromotion();
    // employee2.askForPromotion();
    // employee3.askForPromotion();

    // Developer d = Developer("Shiva", "Amazon", 22, "C++");
    // d.fixbug();
    // d.askForPromotion();

    // Teacher t = Teacher("Lucky", "coolSchool", 32, "Mathematics");
    // t.lessonPrep();
    // t.askForPromotion();





}