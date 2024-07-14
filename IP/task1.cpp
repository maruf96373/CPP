#include<iostream>
using namespace std;
main()
{
    int grade;
    cout<<"Enter the score :",
    cin>>grade;
    if(grade<50)
    {
        cout<<"F"<<endl;
    }
    if(grade>=50 && grade<60)
    {
        cout<<"D"<<endl;
    }
    if(grade>=60 && grade<70)
    {
        cout<<"C"<<endl;
    }
    if(grade>=70 && grade<80)
    {
        cout<<"B"<<endl;
    }
    if(grade>=80 && grade<90)
    {
        cout<<"A"<<endl;
    }
    if(grade>=90 && grade<=100)
    {
        cout<<"A+";
    }
    return 0;

}
