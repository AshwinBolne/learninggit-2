#include<iostream>
using namespace std;

int main()
{
    int num1 = 25;
    int num2 = 50;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout<<"Numbers after swapping: "<<num1<<" "<<num2<<endl;
    return 0;
}