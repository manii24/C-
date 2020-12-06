#include<iostream>
using namespace std;
class Searching
{
    int i,j,n,value,arr[20];
    public:void display()
    {
        cout<<"enter the number of elements";
        cin>>n;
        cout<<"the elements in the array are";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"enter the value to be searched";
        cin>>value;
        for(i=0;i<n;i++)
        {
            if(value==arr[i])
            {
                cout<<"the value is found at index number"<<i;
            }
            else
            {
                cout<<"the value is not found";
            }
        }

    }
};
int main()
{
    Searching d1;
    d1.display();
}
