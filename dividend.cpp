#include<iostream>
using namespace std;
class Calculator
{
    int dividend,divisor,quotient,remainder;
    public:void divi()
{
    cout<<"enter the dividend:";
    cin>>dividend;
    cout<<"enter the divisor:";
    cin>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    cout<<"the quotient is "<<quotient<<"";
    cout<<"The remainder is "<<remainder<<"";
}
};
int main()
{
    Calculator d1;
    d1.divi();
}
