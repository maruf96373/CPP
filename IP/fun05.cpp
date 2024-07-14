#include<iostream>
using namespace std;
int max (int a=[100]);
int main ()
{
    int i,a=(100),n,result;
    cout<<"Enter 2 numbers :"<<endl;
    cin>>a>>b;
    result=max(a,b);
    cout<<"The Largest number is :"<<result<<endl;
    return 0;
}
int max(int a,int b)
{
    int result;
    if (a>b)
    {
        result=a;
    }
    else (a<b)
    {
        result=b;
    }
    return result;
}
