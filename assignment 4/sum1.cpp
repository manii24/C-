#include<iostream>
using namespace std;
class Add
{
    int i,j,arr[20],sum=0,n;
    public:void display()
    {
        cout<<"enter the number of elements"<<endl;
        cin>>n;
        cout<<"the elements in an array are"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
           sum += arr[i];
        }
cout<<"the sum is:"<<sum<<endl;
    }
};
int main()
{
    Add d1;
    d1.display();
}
