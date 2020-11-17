#include<iostream>
using namespace std;
class Check_least
{
    int num1,num2,num3;
    public: void check()
    {
        cout<<"enter the three numbers";
        cin>>num1>>num2>>num3;
        {
            if(num1<num2 && num1<num3)
            {
                cout<<"the number1: "<<num1<<" is the least";
            }
            else if(num2<num1 && num2<num3)
            {
                cout<<"the number2: "<<num2<<" is the least";
            }
            else
            {
                cout<<"the number3: "<<num3<<" is the least";
            }
        }
    }

};
int main()
{
    Check_least d1;
    d1.check();
}
