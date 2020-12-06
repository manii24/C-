#include<iostream>
using namespace std;
class Reverse
{
    int num,reversednumber=0,remainder;
    public:void display()
    {
        cout<<"enter the number";
        cin>>num;
        while(num!=0)
        {
            remainder=num%10;
            reversednumber=reversednumber*10+remainder;
            num=num/10;
        }
      cout<<"the reversed number is "<<num<<"";
    }

};
int main()
{
    Reverse d1;
    d1.display();
}
