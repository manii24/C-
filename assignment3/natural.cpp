#include<iostream>
using namespace std;
class Natural
{
    int i,sum;
    public:void display()
    {
        for(i=1;i<=10;i++)
        {
            cout<<i<<endl;
            sum=sum+i;
        }
        cout<<"the sum of first 10 natural numbers is "<<sum<<"";
    }
};
int main()
{
    Natural d1;
    d1.display();
}
