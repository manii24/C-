#include<iostream>
#include<math.h>
using namespace std;
class Power
{
    int ans;
    public:int Exponent(int a,int b)
    {
        ans=pow(a,b);
        cout<<"the answer is:"<<ans<<endl;
    }
};
int main()
{
    Power d1;
    int num1,num2,ans;
    cout<<"enter the base";
    cin>>num1;
    cout<<"enter the exponent";
    cin>>num2;
    d1.Exponent(num1,num2);
}
