#include<iostream>
using namespace std;
class Maximum
{
    int arr[20],maxi,n,i,j,mini;
    public:void display()
    {
        cout<<"enter the number of elements in the array";
        cin>>n;
        cout<<"enter the elements";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        maxi=arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]>maxi)
            {
             maxi=arr[i];
            }
        }
        mini=arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]<mini)
            {
               mini=arr[i];
            }
        }
        cout<<"the greatest element is "<<maxi<<"";
        cout<<"the smallest element is "<<mini<<"";
    }
};
int main()
{
    Maximum d1;
    d1.display();
}
