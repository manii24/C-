#include<iostream>
using namespace std;
int main()
{
    int num1,num2,*ptr1,*ptr2,sum;
    ptr1=&num1;
    ptr2=&num2;
    cout<<"enter the values you wish to add";
    cin>>num1>>num2;
    sum=*ptr1+*ptr2;
    cout<<"the value is"<<sum;
    return 0;
}
