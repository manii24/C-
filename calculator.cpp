#include<iostream>
using namespace std;
class Calculator
{
int num1,num2,ans;
public:
void add()
{
cout<<"enter the first number";
cin>>num1;
cout<<"enter the second number";
cin>>num2;
ans=num1+num2;
cout<<"the answer is "<<ans<<"";
    }
    void subtract()
    {
cout<<"enter the first number";
cin>>num1;
cout<<"enter the second number";
cin>>num2;
ans=num1-num2;
cout<<"the answer is "<<ans<<"";
    }
    void multi()
    {
cout<<"enter the first number";
cin>>num1;
cout<<"enter the second number";
cin>>num2;
ans=num1*num2;
cout<<"the answer is "<<ans<<"";
    }
    void divi()
    {
cout<<"enter the first number";
cin>>num1;
cout<<"enter the second number";
cin>>num2;
ans=num1/num2;
cout<<"the answer is "<<ans<<"";
    }
    void modulo()
    {
cout<<"enter the first number";
cin>>num1;
cout<<"enter the second number";
cin>>num2;
ans=num1%num2;
cout<<"the answer is "<<ans<<"";
    }
};

int main()
{
    Calculator d1;
    d1.add();
    d1.subtract();
    d1.multi();
    d1.divi();
    d1.modulo();
}
