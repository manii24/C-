#include<iostream>
using namespace std;
class Evenodd
{
    int num;
    public:void Checkeven_odd()
    {
        cout<<"enter the number";
        cin>>num;
    if (num%2==0)
        {
            cout<<"the number is divisible by 2";
        }
    else
    {
        cout<<"The number is not divisible by 2";
    }

    }
};
int main()
{
    Evenodd d1;
    d1.Checkeven_odd();
}
