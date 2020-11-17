#include<iostream>
using namespace std;
class Days
{
    int choice;
    public : void display()
    {
      cout<<"Enter your choice";
      cin>>choice;
        switch(choice)
        {
           case 1: cout<<"Sunday";break;
           case 2:cout<<"Monday";break;
           case 3:cout<<"tuesday";break;
           case 4:cout<<"wednesday";break;
           case 5:cout<<"thursday";break;
           case 6:cout<<"friday";break;
           case 7:cout<<"saturday";break;
           default : cout<<"Invalid choice";

        }
    }
};
int main()
{
    Days d1;
    d1.display();
}
