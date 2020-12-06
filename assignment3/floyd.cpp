#include<iostream>
using namespace std;
class Floyd
{
    int i,j,n,num=1;
    public: void Triangle()
    {
        cout<<"enter the number of rows you need";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<num;
                num++;
            }
            cout<<endl;
        }
    }
};
int main()
{
    Floyd display;
    display.Triangle();
}
