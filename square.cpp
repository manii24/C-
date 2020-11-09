#include<iostream>
using namespace std;
class Calculator
{
int S,A;
public:void area()
{
cout<<"enter the side of the square:";
cin>>S;
A=(S*S);
cout<<"the area of the square is "<<A<<"";
}
};
int main()
{
    Calculator d1;
    d1.area();
}


