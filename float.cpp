#include<iostream>
using namespace std;
class Datatype
{
int n1;
char n2;
float n3;
public:
    void display()
    {
        cout<<"enter the integer";
        cin>>n1;
        cout<<"enter the character";
        cin>>n2;
        cout<<"enter the float";
        cin>>n3;
        cout<<n1<<n2<<n3;
    }
};
int main()
{
    Datatype d1;
    d1.display();
    }
