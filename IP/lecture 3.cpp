#include<iostream>
using namespace std;
main()
{
    int num1,num2,num3;
    cout<<"enter three integer number:";
    cin>>num1>>num2>>num3;
    if ((num1==num2)&&(num2==num3))
    {
        cout<<"all numbers are equal: "<<num1<<endl;
    }
    else
    {
    if ((num1>num2)&&(num1>num3))
    {
        cout<<num1<<"is the largest number"<<endl;
    }
    else if ((num2>num1)&&(num2>num3))
    {
        cout<<num2<<"is the largest number"<<endl;
    }
    else
    {
        cout<<num3<<"is the largest number"<<endl;
    }
    }
    return 0;
}
