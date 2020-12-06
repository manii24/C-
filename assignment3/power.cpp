#include<iostream>
using namespace std;
class Power
{
    int base,power,result=1;
    public:void display()
    {
        cout<<"enter the base and exponent";
        cin>>base>>power;
        while(power!=0)
        {
            result *=base;
            --power;
        }
        cout<<result;
    }
};
int main()
{
    Power d1;
    d1.display();
}
