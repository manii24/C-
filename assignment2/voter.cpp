#include<iostream>
using namespace std;
class Voter_check
{
    int age;
    public:void Check_age()
    {
        cout<<"enter the age:";
        cin>>age;
        if(age>=18)
        {
            cout<<"the person is eligible to vote";
        }
        else
        {
            cout<<"the person is not eligible to vote";
        }
    }
};
int main()
{
    Voter_check d1;
    d1.Check_age();
}

