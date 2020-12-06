#include<iostream>
using namespace std;
class Odd
{
    int arr[20],n,i,j,odd[20];
    public:void display()
    {
        cout<<"enter the number of elements";
        cin>>n;
        cout<<"the elements in the array are:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                odd[j]=arr[i];
                j++;
            }
        }
        cout<<"the odd elements in the array are:\n\n";
        for(i=0;i<j;i++)
        {
            cout<<odd[i];
        }
    }
};
int main()
{
    Odd d1;
    d1.display();
}
