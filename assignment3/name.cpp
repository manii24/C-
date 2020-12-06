#include<iostream>
using namespace std;
class Name
{
    int i;
    public:void display()
    {
        for(i=0;i<5;i++)
        {
            cout<<"\nMy name is manikandan";
        }
    }
};
int main()
{
    Name d1;
    d1.display();
}
