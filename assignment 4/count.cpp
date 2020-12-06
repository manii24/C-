#include<iostream>
using namespace std;
class counter
{
    int arr[20],i,j,n,poscount=0,negativecount=0,zerocount=0;
    public:void display()
    {
        cout<<"enter the number of elements";
        cin>>n;
        cout<<"the elements in the array are";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                zerocount++;
            }
            else if(arr[i]>0)
            {
                poscount++;
            }
            else
            {
                negativecount++;
            }
        }
        cout<<"\nthe number of zeroes are "<<zerocount<<"";
        cout<<"\nthe number of postive number are "<<poscount<<"";
        cout<<"\nthe number of negative numbers are "<<negativecount<<"";
    }
};
int main()
{
    counter d1;
    d1.display();
}
