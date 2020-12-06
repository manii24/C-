#include<iostream>
using namespace std;
class Alphabet
{
    char Alpha,i;
    public:void display()
    {
        for(i='A';i<='Z';i++)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    Alphabet d1;
    d1.display();
}
