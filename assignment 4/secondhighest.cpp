#include<iostream>
using namespace std;
class Highest
{
    int arr[20],i,j,n,x;
    public:void display()
    {
        cout<<"enter the number of elements";
        cin>>n;
        cout<<"the elements are";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if (arr[i]<arr[j])
                {
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
                }
            }
        }
            cout<<"second largest number is "<<arr[1];

    }

};
int main()
{
    Highest d1;
    d1.display();
}
