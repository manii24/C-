#include<iostream>
using namespace std;
class Data_type
{
    int n1;
    char n2;
    float n3;
    public: void display()
    {
        cout<<"enter the integer:";
        cin>>n1;
        cout<<"enter the charaacter:";
        cin>>n2;
        cout<<"enter the float:";
        cin>>n3;
        cout<<"the integer is "<<n1<<" , the character is "<<n2<<" , the float is "<<n3<<"";
    }
};
int main()
{
    Data_type d1;
    d1.display();
}
