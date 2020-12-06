#include<iostream>
using namespace std;
class Power
{
    int ans;
    public:int Exponent(int a,int b)
    {
        ans=pow(a,b);
    }
};
int main()
{
    Power d1;
    int num1,num2;
    cout<<"enter the base";
    cin>>num1;
    cout<<"enter the exponent";
    cin>>num2;
    d1.Exponent(num1,num2);
    return 0;
}
