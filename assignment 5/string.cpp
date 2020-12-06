#include<iostream>
#include<string>

int main() {

    std::string str;
    int num;
    puts ("enter the string");
    gets (str);
    num = std::stoi(str);

    std::cout << num;

    return 0;
}
