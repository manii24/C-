#include<iostream>
using namespace std;
class Table
{
    int i,num;
    public:void display()
    {
        cout<<"enter the number";
        cin>>num;
        for(i=0;i<10;i++)
        {
            cout<<num<< "*" <<i<< "=" <<num * i <<endl;
        }
    }
};
int main()
{
    Table d1;
    d1.display();
}
