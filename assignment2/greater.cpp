#include<iostream>
using namespace std;
class Greater
{
    int num;
    public:void Check_greater()
    {
        cout<<"Enter the number";
        cin>>num;
        if(num>10)
        {
            cout<<"the number is greater";
        }
        else
        {
          cout<<"the number is not greater";
        }

    }
};
int main()
{
    Greater d1;
    d1.Check_greater();
}
