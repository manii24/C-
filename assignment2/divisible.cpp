#include<iostream>
using namespace std;
class Divisibility
{
    int num;
    public:void display()
    {
        cout<<"enter the number";
        cin>>num;
        {
            if(num%9==0)
            {
                cout<<"the number "<<num<<" is divisible by 9";
            }
            else
            {
                cout<<"the number "<<num<<" is not divisible by 9";
            }
        }

    }
};
int main()
{
    Divisibility d1;
    d1.display();
}
