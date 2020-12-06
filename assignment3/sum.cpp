#include<iostream>
using namespace std;
class Sum
{
    int num,remainder,result=0;
    public:void display()
    {
        cout<<"enter the number";
        cin>>num;
        while(num!=0)
        {
            remainder=num%10;
            result=(result)+remainder;
            num=num/10;
        }
        cout<<"the sum of the numbers is "<<result<<"";
    }
};
int main()
{
 Sum d1;
 d1.display();
}
