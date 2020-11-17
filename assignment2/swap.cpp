#include<iostream>
using namespace std;
class Changing_number
{
    int num1,num2,temp;
    public: void display()
    {
        cout<<"enter the two number";
        cin>>num1>>num2;
        temp=num1;
        num1=num2;
        num2=temp;
        cout<<"\n after swaping the numbers are "<<num1<<","<<num2<<"";
    }
};
int main()
{
    Changing_number d1;
    d1.display();
}
