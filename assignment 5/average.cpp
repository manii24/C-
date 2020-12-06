#include<iostream>
using namespace std;
class Calculator
{
    public:void avg(int a)
    {
    cout<<"the average is:"<<a;
    if(a>100)
    {
        cout<<"the average is greater than 100"<<a<<endl;
    }
    else
    {
        cout<<"the average is not greater than 100";
    }
    }

};
int main()
{
    Calculator d1;
    int num1,num2,num3,num4,num5,average;
    cout<<"enter the five number:";
    cin>>num1>>num2>>num3>>num4>>num5;
    average=(num1+num2+num3+num4+num5)/5;
        d1.avg(average);

}
