#include<iostream>
using namespace std;
class Counter
{
    int arr[20],n,i,j,evennumber=0,oddnumber=0;
    public:void display()
    {
        cout<<"enter the number of elements:";
        cin>>n;
        cout<<"the elements in the array are";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                evennumber++;
            }
            else
            {
                oddnumber++;
            }
        }
        cout<<"\nthe number of evens are "<<evennumber<<"";
        cout<<"\nthe number of odds are "<<oddnumber<<"";
    }
};
int main()
{
    Counter d1;
    d1.display();
}
