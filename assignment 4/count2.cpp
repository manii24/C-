#include<iostream>
using namespace std;
class Counter
{
    int i,j,counte,n,arr[20];
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
            if(arr[i]!='\0')
            {
              counte++;
            }
        }
        cout<<"the number of elements are:"<<counte;
    }
};
int main()
{
    Counter d1;
    d1.display();
}
