#include<iostream>
using namespace std;
class Check_postive
{
    int num;
    public:void Postive_number()
    {
        cout<<"enter the number";
        cin>>num;
        {
            if (num>0)
            {
              cout<<"the number is positive";
            }
            else if (num==0)
            {
                cout<<"the number is zero";
            }
            else
            {
                cout<<"the number is negative";
            }
        }
    }
};
int main()
{
    Check_postive d1;
    d1.Postive_number();

}
