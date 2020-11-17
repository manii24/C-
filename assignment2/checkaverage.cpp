#include<iostream>
using namespace std;
class Check_average
{
    int num1,num2,num3,num4,num5,average,sum;
    public:void check()
    {
        cout<<"enter the five numbers";
        cin>>num1>>num2>>num3>>num4>>num5;
        sum=num1+num2+num3+num4+num5;
        average=sum/5;
        {
        if (average>10)
        {
            cout<<"the average "<<average<<" is greater than 10";
        }
        else
        {
            cout<<"the average "<<average<<" is lesser than 10";
        }

    }
    }
};
int main()
{
    Check_average d1;
    d1.check();
}
