// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void setDate(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }

    // void setday(int d)
    // {
    //     day = d;
    // }
    // void setmonth(int m)
    // {
    //     month = m;
    // }

    // void setyear(int y)
    // {
    //     year = y;
    // }

    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }

    bool isValidDate() {
        if(month < 1 || month > 12)
        {
            return false;
        }
        if(day < 1 || day > 31){
            return false;
        }
        if(month == 4 || month == 6 || month == 9 || month ==11 && day > 30){
            return false;
        }

        if(month == 2)
        {
            if((year % 4 == 0 && year % 100 !=0) || year % 400 == 0){
                if(day > 29)
                {
                    return false;
                }
                else{
                    if(day > 28) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
int main()
{
    Date d = Date(0,0,0); 

    int day, month, year;
    
    cout<<"Input day : ";
    cin>>day;
    cout<<"Input month : ";
    cin>>month;
    cout<<"Input year : ";
    cin>>year;

    d.setDate(day, month, year);

    cout<<"Date : "<<d.getday()<<"/"<<d.getmonth()<<"/"<<d.getyear()<<endl;

    if(d.isValidDate()){
        cout<<"The date is valid."<<endl;
    } 

    else{
        cout<<"Invalid!";
    }





    // d.setDate(2,3,2000);
    // d.getday();
    // d.getmonth();
    // d.getyear();
    // d.isValidDate();
    return 0;
}