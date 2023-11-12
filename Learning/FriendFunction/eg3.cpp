#include<bits/stdc++.h>
using namespace std;

class Summation{
    private:
    int num1, num2;

    public:
    Summation() : num1(34), num2(16){}

    friend void friendFunction(Summation obj);
};

void friendFunction(Summation obj){
    cout<<"Summation of two number is "<<obj.num1+obj.num2<<"."<<endl;
}
int main(){

    Summation sum;
    friendFunction(sum);
    return 0;
}