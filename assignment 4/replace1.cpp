#include<iostream>
using namespace std;
class Replace_Ex
{
    int i,n,arr[20],temp=0;
    public:void display()
    {
        cout<<"enter the number of elements"<<endl;
        cin>>n;
        cout<<"the elements in an array are"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"the values in the array are";
        for(i=0;i<n;i++)
        {
            while (arr[i]>0)
            {
                arr[i]=temp;
               cout<<arr[i];
            }
        }

    }
};
int main()
{
    Replace_Ex d1;
    d1.display();
}
