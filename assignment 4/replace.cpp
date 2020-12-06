#include<iostream>
using namespace std;
class Replace_array
{
    int i,j,n,arr[20],position,value,temp;
    public:void display()
    {
        cout<<"enter the number of elements"<<endl;
        cin>>n;
        cout<<"the elements in an array are"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"enter the value to be replaced"<<endl;
        cin>>value;
        cout<<"enter the position"<<endl;
        cin>>position;
        arr[position]=value;
        for(i=0;i<n;i++)
        {
            if(position==n || position>n || position<0)
        {
            cout<<"can not be inserted";
        }
        else{
            arr[position]=arr[i];
        }
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Replace_array d1;
    d1.display();
}
