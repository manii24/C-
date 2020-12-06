#include<iostream>
#include<string.h>
using namespace std;
class Palindrome
{
    char str[20],str1[20];
    int i,j,len=0,flag=0;
    public:void Calculate()
    {
        cout<<"enter the string";
        gets(str);
        len=strlen(str);
        for(i=len,j=0;i>=0;i--,j++)
        {
            str1[j]=str[i];
                    }
   if (strcmp(str, str1))
   {
       flag=1;
   if(flag==1)
    {
        cout << str << " is not a palindrome";
    }
    else
        cout << str << " is a palindrome";
    }
    }

};
int main()
{
    Palindrome d1;
    d1.Calculate();
}
