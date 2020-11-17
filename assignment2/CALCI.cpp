#include<iostream>
using namespace std;
class Calculator
{
    int num1,num2,choice,ans;
    public:void display()
    {
        cout<<"Enter the two numbers";
        cin>>num1>>num2;
        cout<<"enter the preferred operation 1) addition 2)subtraction 3)division 4)multiplication";
        cin>>choice;
        switch (choice)
        {
            case 1:ans=num1+num2;
            cout<<"the answer is "<<ans<<""; break;
            case 2:ans=num1-num2;
                cout<<"the answer is "<<ans<<""; break;
            case 3:ans=num1/num2;
                cout<<"the answer is "<<ans<<""; break;
            case 4:ans=num1*num2;
                cout<<"the answer is "<<ans<<""; break;
            default: cout<<"invalid";
        }
    }
};
int main()
{
    Calculator d1;
    d1.display();
}
