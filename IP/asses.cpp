#include<iostream>
#include<stdlib.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    person()
    {
        cout<<"name :"<<"age :"<<age<<endl;
    }
};

class student
{
    public:
        int time;
    student ()
    {
        cout<<"reading time :"<<time<<endl;
    }
};

class graduate_student : public person, public student
{
    public:
        double cgpa;
        graduate_student()
        {
            cout<<"got cgpa :"<<endl;
            cin>>cgpa
        }

};

int main()
{
    graduate_student obj;

    return 0;
}
