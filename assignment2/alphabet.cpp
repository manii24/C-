#include<iostream>
using namespace std;
class Alphabet
{
    char Alpha;
    public:void Check_alphabet()
    {
        cout<<"enter the alphabet";
        cin>>Alpha;
        if(Alpha>='a' && Alpha<='z'|| Alpha>='A'&& Alpha<='Z')
        {
            cout<<"the entered value is a character";
        }
        else
        {
            cout<<"the entered value is not a character";
        }
    }
};
int main()
{
    Alphabet d1;
    d1.Check_alphabet();
}

