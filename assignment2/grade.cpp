#include<iostream>
using namespace std;
class Grade_check
{
    int mark;
    public:void check()
    {
        cout<<"enter the mark obtained by the student";
        cin>>mark;
        {
            if(mark>=90)
            {
                cout<<"the student has obtained A grade";
            }
            else if(mark>=80 && mark<90)
            {
                cout<<"the student has obtained B grade";
            }
            else if (mark>=60 && mark<80)
            {
                cout<<"the student has obtained C grade";
            }
            else if (mark>=45 && mark<60)
            {
            cout<<"the student has obtained D grade";
            }
            else
                {
                    cout<<"the student has failed";
                }
                    }
    }
};
int main()
{
    Grade_check d1;
    d1.check();
}
