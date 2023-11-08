// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    string getaccountNum()
    {
        return this->accountNumber;
    }
    double getbalance()
    {
        return this->balance;
    }

    BankAccount(string ac, double b)
    {
        this->accountNumber = ac;
        this->balance = b;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited Amount : " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Availabe balance is " << balance << endl;
        }
        else{
            cout<<"insufficient balance. "<<endl;
        }
    }
};

int main()
{

    string AC = "ABCD12345";

    double initialAmt,
        depositAmt, withdrawAmt, TotalBalance;

    initialAmt = 1000;

    cout << "Account Number : " << AC << endl
         << "Initial Amount : " << initialAmt << endl;

    BankAccount ba = BankAccount(AC, initialAmt);

    cout<<"Current Balance :"<<initialAmt<<endl;


    depositAmt = 2500;
    cout<<"Amount deposited "<<depositAmt<<endl;
    ba.deposit(depositAmt);

    TotalBalance = initialAmt +depositAmt;
    cout<<"Total Balance is "<<TotalBalance<<endl;
    
    withdrawAmt = 300;
    cout<<"Withdrawa Ammount : "<<withdrawAmt<<endl;
    ba.withdraw(withdrawAmt);

    return 0;
}
