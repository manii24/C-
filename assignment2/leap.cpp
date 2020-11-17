#include<iostream>
using namespace std;
class Check_year
{
    int year;
    public: void check()
    {
        cout<<"enter the year";
        cin>>year;
        {
            if(year%4==0)
            {
                cout<<"the entered year "<<year<<" is a leap year";
            }
            else
            {
                cout<<"the entered year "<<year<<" is not a leap year";
            }
        }
    }
};
int main()
{
    Check_year d1;
    d1.check();
}
