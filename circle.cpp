#include<iostream>
using namespace std;
class Calculator
{
    int A,R;
    public:void area()
    {
        cout<<"enter the value of radius:";
        cin>>R;
        A=3.14*R*R;
        cout<<"the value of area is "<<A<<"";
    }
};
int main()
{
    Calculator d1;
    d1.area();
}
