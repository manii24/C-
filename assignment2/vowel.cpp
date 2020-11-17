#include<iostream>
using namespace std;
class Vowel
{
    char Alpha;
    public: void check()
    {
        cout<<"enter the character";
        cin>>Alpha;
        {
        if(Alpha=='a'|| Alpha=='e'|| Alpha=='i'|| Alpha=='o'|| Alpha=='u')
        {
            cout<<"the enter value is a vowel "<<Alpha<<"";
        }
        else
        {
            cout<<"the entered value is consonant "<<Alpha<<"";
        }
    }
    }
};
int main()
{
    Vowel d1;
    d1.check();
}
