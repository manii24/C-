#include<iostream>
using namespace std;
class Addition
{
    int num1,num2,sum,ans;
    public:void check()
    {
        cout<<"enter the two number";
        cin>>num1>>num2;
        sum=num1+num2;
        ans=num1*num2;
        {
            if(sum>ans)
            {
                cout<<"the greatest number is obtained by addition and the number is: "<<sum<<"";
            }
            else
            {
                cout<<"the greatest number is obtained by multiplication and the number is: "<<ans<<"";
            }
        }

    }
};
int main()
{
    Addition d1;
    d1.check();

}
