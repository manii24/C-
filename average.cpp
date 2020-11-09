#include<iostream>
using namespace std;
class Calculator
{
    int A,B,C,D,E,Average;
    public:void avg()
    {
      cout<<"enter the first number:";
      cin>>A;
      cout<<"enter the second number:";
      cin>>B;
      cout<<"enter the third number";
      cin>>C;
      cout<<"enter the fourth number:";
      cin>>D;
      cout<<"enter the fifth number:";
      cin>>E;
      Average=(A+B+C+D+E)/5;
      cout<<"the average of 5 numbers is "<<Average<<"";

    }
};
int main()
{
    Calculator d1;
    d1.avg();
}
