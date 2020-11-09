#include<iostream>
using namespace std;
class Decimal
{
    float Num1,Num2,Ans;
    public:void mul()
{
cout<<"enter the first number:";
cin>>Num1;
cout<<"enter the second number:";
cin>>Num2;
Ans=Num1*Num2;
cout<<"the answer is "<<Ans<<"";
}
};
int main()
{
    Decimal d1;
    d1.mul();
}
