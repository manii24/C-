#include<iostream>
#include<string.h>
using namespace std;
class Name
{
    char a[20],b[20];
    char ch;
    public:void display()
    {
        cout<<"enter the first string"<<endl;
        gets(a);
        cout<<strrev(a)<<endl;
    }

};
int main()
{
    Name d;
    d.display();
}
