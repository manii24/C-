#include<iostream>
using namespace std;
class Sorting
{
    int i,j,n,temp,arr[20];
    public:void display()
    {
        cout<<"enter the number of elements";
        cin>>n;
        cout<<"the elements in unsorted order are:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if (arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }

        }
        cout<<"\n\nthe elements in sorted order are:";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Sorting d1;
    d1.display();
}
