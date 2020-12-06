#include<iostream>
using namespace std;
class Prime
{
    int num,i;
    public:void Check()
    {
        cout<<"enter the number";
        cin>>num;
        if(num==0||num==1)
        {
            cout<<"the number "<<num<<" is not prime";
        }
        else if(num!=0&&num!=1)
        {
            for (i=2;i<=num/2;++i)
            {
                if (num%i==0)
                {
                    cout<<"the number is not prime";
                }

        }
        }
        else
        {

    cout<<"the number is prime";
        }

    }
};
int main()
{
    Prime d1;
    d1.Check();
}
