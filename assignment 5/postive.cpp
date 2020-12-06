#include<iostream>
using namespace std;
class Postive
{
    public:void check(int a)
    {
        if (a>0)
        {
            cout<<"the number is postive"<<a<<endl;
        }
        else if(a<0)
        {
            cout<<"the number is negative"<<a<<endl;
        }
        else
        {
            cout<<"the number is zero"<<endl;
        }
    }
};
int main()
{
    Postive d1;
    int num;
    cout<<"enter the number";
    cin>>num;
    d1.check(num);
}
