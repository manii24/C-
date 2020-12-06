#include<iostream>
using namespace std;
class Address_ex
{
    char a;
    public:void display()
    {
        cout<<"enter the value";
        cin>>a;
        cout<<"the value is:"<<&a;
    }
};
int main()
{
    Address_ex d1;
    d1.display();
}
