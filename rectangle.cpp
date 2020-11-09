#include<iostream>
using namespace std;
class Calculator
{
    int L,B,P,A;
    public:void area()
{
    cout<<"enter the length:";
    cin>>L;
    cout<<"enter the breath:";
    cin>>B;
    A=L*B;
    P=2*(L+B);
    cout<<"The area of rectangle is "<<A<<"";
    cout<<"The perimeter of rectange is "<<P<<"";
}
};
int main()
{
    Calculator d1;
    d1.area();
}
