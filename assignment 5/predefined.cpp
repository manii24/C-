#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class Predefined
{
    std :: string str="123";
    int num;
    public:void display()
    {
       int num=std::atoi(str);
       std:: cout<<"the string in int format is"<<num<<endl;
    }
};
int main()
{
    Predefined d1;
    d1.display();
    return 0;
}
