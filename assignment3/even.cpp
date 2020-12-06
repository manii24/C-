#include<iostream>
using namespace std;
class Even
{
    int i;
    public:void display()
    {
        cout<<"the first 10 even numbers are";
        for(i=2;i<20;i=i+2)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    Even d1;
    d1.display();
}
