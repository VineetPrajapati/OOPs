#include<bits/stdc++.h>
using namespace std;

class Base{
    private:
    int private_variable;

    protected:
    int protected_variable;

    public:
    Base() : private_variable(10), protected_variable(99){}

   friend void friendFunction(Base obj);
};

void friendFunction(Base obj){
    cout<<"Private member called, value is : "<<obj.private_variable<<endl;
    cout<<"Protected member called, value is  : "<<obj.protected_variable;
}

int main(){

    Base obj1;
    friendFunction(obj1);

    return 0;

}