#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int rno;
    string name;double fee;
    public:
    student(int, string , double    );
    student(student& t)
{
    rno=t.rno;
    name=t.name;
    fee=t.fee;
    cout<<"copy constructor called"<<endl;
}
    void display()
    {
        cout<<rno<<"\t"<<name<<"\t"<<fee<<endl;
    }

};
student::student(int no, string n, double f)
{
    rno=no;
    name=n;
    fee=f;
    cout<<"para constructor called"<<endl;
}
void student::display()
{
    cout<<rno<<"\t"<<name<<"\t"<<fee<<endl;
}
int main()
{
    student s(23023,"fgd",1000);
    s.display();

    student fdg(s);
    fdg.display();
    
}
