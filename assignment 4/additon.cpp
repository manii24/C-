#include<iostream>
using namespace std;
class Addition
{
    int arr1[20],arr2[20],sum[20],i,j,n;
    public:void add()
    {
        cout<<"enter the number of elements"<<endl;
        cin>>n;
        cout<<"the elements in an array are"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        cout<<"enter the number of elements"<<endl;
        cin>>n;
        cout<<"the elements in an array are"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        for(i=0;i<n;i++)
        {
            sum[i]=arr1[i]+arr2[i];
            cout<<"the sum is:"<<sum[i]<<endl;
        }
    }
};
int main()
{
    Addition d1;
    d1.add();
}
