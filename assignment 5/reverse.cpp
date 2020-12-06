#include<iostream>
using namespace std;
class Reverse_Ex
{
    int revnumber=0,remainder;
    public:void reverse_number(int a);
};
void Reverse_Ex :: reverse_number(int a)
{
while (a!=0)
{
    remainder=a%10;
    revnumber=revnumber*10+remainder;
    a=a/10;
    }
    cout<<"the reversed number is:"<<revnumber<<endl;

}
int main()
{
    Reverse_Ex d1;
    int num;
    cout<<"enter the number";
    cin>>num;
    d1.reverse_number(num);
}
