#include<iostream>
using namespace std;

class Myclass{
    private:
    int privateMember;

    public:
    Myclass(int value) : privateMember(value){}

    friend int friendFunction(Myclass obj);
};

int friendFunction(Myclass obj){
    cout<<"This function is accessing the private member "<<obj.privateMember<<endl;

}
int main(){
    Myclass myobj(45);
    friendFunction(myobj);

    return 0;
}