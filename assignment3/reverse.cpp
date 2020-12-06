#include<iostream>
using namespace std;
class Reverse
{
    int i;
    public:void display()
    {
        for(i=10;i>0;i--)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    Reverse d1;
    d1.display();
}
