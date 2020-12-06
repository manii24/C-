#include<iostream>
using namespace std;
class Number
{
    int index;
    public:void display()
    {
        cout<<"the first ten numbers are";
        for(index=0;index<10;index++)
        {
         cout<<index<<endl;
        }
    }
};
int main()
{
    Number d1;
    d1.display();
}
