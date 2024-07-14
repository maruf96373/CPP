#include<iostream>
using namespace std;
main()
{
    int eng,phy,math,ics,ip,total,avg;
    double percent;
    cout<<"English Marks :"<<endl;
    cin>>eng;
    cout<<"Physics Marks :"<<endl;
    cin>>phy;
    cout<<"Math Marks    :"<<endl;
    cin>>math;
    cout<<"ICS Marks     :"<<endl;
    cin>>ics;
    cout<<"IP Marks      :"<<endl;
    cin>>ip;
    total=(eng+phy+ics+ip+math);
    avg=(total)/5;
    percent=(total)/100;
    cout<<"Total Marks   :"<<total<<endl;
    cout<<"Average Marks :"<<avg<<endl;
    cout<<"Percentage    :"<<percent<<endl;
    return 0;
}
