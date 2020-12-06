#include<iostream>
using namespace std;
class Odd
{
    int i;
    public:void display()
    {
        cout<<"the first 100 odd numbers are:\n";
        for(i=1;i<200;i=i+2)
        {
             cout<<i<<endl;
        }
    }
};
int main()
{
    Odd d1;
    d1.display();
}
