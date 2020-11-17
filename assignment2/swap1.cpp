#include<iostream>
using namespace std;
class Swap_number
{
    int a,b;
    public: void check()
    {
        cout<<"enter the two numbers";
        cin>>a>>b;
        a=a*b;
        b=a/b;
        a=a/b;
        cout<<"after swapping the numbers are "<<a<<","<<b<<"";
    }
};
int main()
{
    Swap_number d1;
    d1.check();
}
