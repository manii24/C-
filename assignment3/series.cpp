#include<iostream>
using namespace std;
class Series
{
    int n,t1=0,t2=1,next_term=0;
    void:
        public display()
    {
        cout<<"enter the number";
        cin>>n;
        {
            for(int i=1;i<=n;++i)
            {
                if(i==1)
                {
                    cout<<t1;
                    continue;
                }
                if(i==2)
                {
                    cout<<t2;
                    continue;
                }
                next_term=t1+t2;
                t1=t2;
                t2=next_term;
                cout"<<next_term<<";
            }
        }
    }
};
int main()
{
    Series d1;
    d1.display();
}
