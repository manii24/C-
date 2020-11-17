#include<iostream>
using namespace std;
class ASCI
{
    char c;
    public: void display()
    {
        cout<<"enter the character";
        cin>>c;
        cout<<"ASCII value of "<<c<<" is "<<int(c);
    }
};
int main()
{
    ASCI d1;
    d1.display();
}
