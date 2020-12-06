#include<iostream>
using namespace std;
class multiply
{
    int arr[20],i,n,j;
    public:void display()
    {
        cout<<"enter the number of elements";
        cin>>n;
        cout<<"enter the elements";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }
          cout<<"the elements in the array are:";
          for(j=0;j<n;j++)
          {
              cout<<2*arr[j]<<endl;

          }
    }

};
int main()
{
    multiply d1;
    d1.display();
}
