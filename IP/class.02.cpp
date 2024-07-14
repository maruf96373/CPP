#include<iostream>
using namespace std;
main()
{
    int num1,num2,num3,odd,sum;
    cout<<"enter three numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if(num1%2!=0)
        cout<<"display the odd numbers :"<<num1<<endl;
    if (num2%2!=0)
        cout<<"display the odd numbers :"<<num2<<endl;
    if(num3%2!=0)
        cout<<"display the odd numbers :"<<num3<<endl;
        sum=num1+num3;
        cout<<"sum :"<<sum;
        return 0;


}
