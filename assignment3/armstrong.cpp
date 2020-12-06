#include<iostream>
using namespace std;
class Armstrong
{
    int num,n,remainder,result;
    public:void display()
    {
        cout<<"enter the number";
        cin>>num;
        n=num;
        while(n!=0)
        {
            remainder=n%10;
            result +=remainder*remainder*remainder;
            n=n/10;
        }
        if(result==num)
        {
            cout<<"the number is armstrong";
        }
        else
        {
            cout<<"the number is not armstrong";
        }
    }

};
int main()
{
    Armstrong d1;
    d1.display();
}
