#include<iostream>
using namespace std;
class Calculator
{
    int A,B,C,M;
    public:void mul()
    {
        cout<<"Enter the first number";
        cin>>A;
        cout<<"Enter the second number";
        cin>>B;
        cout<<"enter the third number";
        cin>>C;
        M=(A*B*C);
        cout<<"the answer is "<<M<<"";
    }
};
int main()
{
    Calculator d1;
    d1.mul();
}
