#include<iostream>
using namespace std;
class Inequality
{
    int num1,num2;
    public:void Check_inequality()
    {
        cout<<"enter the two numbers";
        cin>>num1>>num2;
        if(num1!=num2)
        {
            cout<<"the numbers are not equal";
        }
        else
        {
            cout<<"the numbers are equal";
        }
    }
};
int main()
{
    Inequality d1;
    d1.Check_inequality();
}
