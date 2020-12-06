#include<iostream>
using namespace std;
class Couter
{
    int num,counte=0;
    public:void display()
    {
        cout<<"enter the number";
        cin>>num;
        {
            while(num!=0)
            {
                num=num/10;
                counte=counte+1;
            }
            cout<<"the number of digits in a number is "<<counte<<"";
        }
    }
};
int main()
{
    Couter d1;
    d1.display();
}
