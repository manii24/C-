#include<iostream>
using namespace std;
class Calculator
{
    private:
    int sum,ans;
public:
    void Add(int a, int b);
    void subtract(int a,int b);
    void multiply(int a,int b);
    void divide(int a,int b);
    void modulo(int a,int b);
};
void Calculator::Add(int a,int b)
{
    sum=a+b;
    cout<<"the answer is:"<<sum<<endl;
}
void Calculator :: subtract(int a,int b)
{
    ans=a-b;
    cout<<"the answer is:"<<ans<<endl;
}
void Calculator :: multiply(int a,int b)
{
    ans=a*b;
    cout<<"the answe is:"<<ans<<endl;
}
void Calculator :: divide(int a,int b)
{
    ans=a/b;
    cout<<"the answer is:"<<ans<<endl;
}
void Calculator :: modulo(int a,int b)
{
    ans=a%b;
    cout<<"the answer is:"<<ans<<endl;
}
int main()
{
    Calculator c1;
    int num1,num2,ch;
    char choice;
    cout<<"enter the two numbers";
    cin>>num1>>num2;
    do{
        cout<<"enter the operation you want to do. 1)addition 2)subtraction 3)multiplication 4)division 5) modulo";
        cin>>ch;
        switch (ch)
        {
            case 1 : c1.Add(num1,num2); break;
            case 2 : c1.subtract(num1,num2); break;
            case 3 : c1.multiply(num1,num2); break;
            case 4 : c1.divide(num1,num2); break;
            case 5 : c1.modulo(num1,num2); break;
        }
        cout<<"do you wish to continue";
    cin>>choice;

    }while(choice=='y' || choice== 'Y');

}
