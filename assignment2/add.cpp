#include<iostream>
using namespace std;
class Addition
{
    int num1,num2,sum;
    public: void check()
    {
        cout<<"enter the two numbers";
        cin>>num1>>num2;
        sum=num1+num2;
        {
            if(sum>100)
            {
                cout<<"the number is greater than 100";
            }
            else
            {
                cout<<"the sum "<<sum<<" is lesser than 100";

            }

        }
    }
};
int main()
{
    Addition d1;
    d1.check();
}
