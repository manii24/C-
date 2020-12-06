#include<iostream>
using namespace std;
class Even
{
    int arr[20],n,i,j,even[20];
    public:void display()
    {
        cout<<"enter the number of elements";
        cin>>n;
        cout<<"enter the elements of the array";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even[j]=arr[i];
                j++;
            }
        }
        cout<<"the even elements are:\n\n";
        for(i=0;i<j;i++)
        {
            cout<<even[i]<<endl;
        }
    }
};
int main()
{
    Even d1;
    d1.display();
}
