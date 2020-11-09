#include<iostream>
using namespace std;
class Calculator
{
int p,r,t,i;
public:void Simple_interest()
{
cout<<"enter the principle :";
cin>>p;
cout<<"enter the years:";
cin>>t;
cout<<"enter the rate:";
cin>>r;
i=(p*r*t)/100;
cout<<"the simple interest for the principle "<<p<<" at the rate "<<r<<" for "<<t<<" years is "<<i<<"";
}
};
int main()
{
    Calculator d1;
    d1.Simple_interest();
}
