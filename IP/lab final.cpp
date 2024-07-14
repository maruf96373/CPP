#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    void display()
    {
        cout<<"name :"<<endl;
        cin>>name;
        cout<<"age :"<<endl;
        cin>>age;
    }
};
class student : public person
{
    public:
        string Id;
        void display1()
        {
            void display();
            cout<<"ID :"<<endl;
            cin>>Id;
        }

};
class graduate_student : public person, public student
{
    public:
        double cgpa;
        void display2()

        {
            void display1();
            cout<<"CGPA :"<<endl;
            cin>>cgpa;
            cout<<"Graduated"<<endl;
        }

};
class employee: public person
{
    public:
        int time;
        void display3()
        {
            void display();
            cout<<"working time"<<endl;
            cin>>time;
        }
};


class officer :public person , public employee
{
    public:
        int salary;
        void display4()
        {
            void display2();
            cout<<"salary"<<endl;
            cin>>salary;
        }
};
class faculty : public person , public employee
{
    public:
    int time;
        void display5()
        {
            void display2();
            cout<<"guiding time :"<<endl;
            cin>>time;
        }

};
class teaching_assistant : public student
{
    public:
        void display6()
        {
            void display1();
            cout<<"A teaching assistant";
        }

};
int main()
{

    person obj;
    student obj1;
    graduate_student obj2;
    officer obj4;
    faculty obj5;
    teaching_assistant obj6;

    obj.display();
    obj1.display1();
    obj2.display2();
    obj4.display4();
    obj5.display5();
    obj6.display6();
}
