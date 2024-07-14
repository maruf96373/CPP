#include<iostream>
#include<cstring>
using namespace std;
main()
{
    char key[]="mango";
    char buffer [50];
    do{
        cout<<"what is my favourite fruit?";
        cin>>buffer;
    }while(strcmp (key,buffer)!=0);
    cout<<"answer is correct!!"<<endl;
    return 0;
}
