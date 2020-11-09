#include<iostream>
using namespace std;
class Calculator
{
    int num1;
    public:void inc()
    {
    cout<<"enter the number:\n";
    cin>>num1;
    cout<<"after incrementing the value is : \n"<<num1+7;
    }
};
int main()
{
    Calculator value;
    value.inc();
}

