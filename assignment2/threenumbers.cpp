#include<iostream>
using namespace std;
class Check_greater
{
    int num1,num2,num3;
    public: void Greater_number()
    {
        cout<<"enter the three numbers";
        cin>>num1>>num2>>num3;
        if(num1>num2 && num1>num3)
        {
            cout<<"Number 1 is greater";

        }
        else if (num2>num1 && num2>num3)
        {
            cout<<"number 2 is greater";
        }
        else
        {
            cout<<"number 3 is greater";
        }
    }
};
int main()
{
    Check_greater d1;
    d1.Greater_number();
}
