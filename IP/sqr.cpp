#include<iostream>
using namespace std;
int area (int num1, int num2)
{
    cout<<"square is :"<<num1*num1<<endl;
    cout<<"rectangle is :"<<num1*num2<<endl;
    cout<<"triangle is :"<<0.5*num1*num2<<endl;
}
int main()
{
    int n1,n2;
    cout<<"Enter a number" <<endl;
    cin>>n1>>n2;
    area(n1,n2);
}
