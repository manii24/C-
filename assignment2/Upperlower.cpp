#include<iostream>
using namespace std;
class Check_alphabet
{
    char c1;
    public:void display()
    {
        cout<<"enter the alphabet";
        cin>>c1;
        if (c1>='A'&& c1<='Z')
        {
            cout<<"the alphabet is upper case";
        }
        else
        {
            cout<<"the alphabet is lower case";
        }
    }

};
int main()
{
    Check_alphabet d1;
    d1.display();
}
