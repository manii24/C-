#include<iostream>
using namespace std;
class Check_greater
{
    int num1,num2;
    public:void Greater_number()
    {
        cout<<"enter the two numbers:";
        cin>>num1>>num2;
        if (num1>num2)
        {
            cout<<"Number 1 is greater";
        }
        else
        {
            cout<<"Number 2 is greater";
        }
    }
};
int main()
{
    Check_greater d1;
    d1.Greater_number();
}
