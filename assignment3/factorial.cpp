#include<iostream>
using namespace std;
class Factorial
{
    int num,factorial=1;
    public:void Fact()
    {
        cout<<"enter the number to find the factorial";
        cin>>num;
        for(int a=1;a<=num;a++)
        {
            factorial=factorial*a;
        }
        cout<<"the factorial of the number is :"<<factorial<<endl;
    }
};
int main()
{
    Factorial display;
       display.Fact();
}
