#include<iostream>
using namespace std;
main()
{
    int num1,num2,num3,largest;
    cout<<"enterd number :"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
        cout<<num1<<" :is the largest"<<endl;
    else if (num2>num1 && num2>num3)
        cout<<num2<<" :is the largest"<<endl;
    else
        cout<<num3<<" :is the largest"<<endl;
    largest=num1;
    largest=num2;
    largest=num3;
    if (largest%2!=0)
        cout<<"largest is odd";
    else
        cout<<"largest is even";
    return 0;
}
