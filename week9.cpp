#include<iostream>
using namespace std;
class Employee
{
    char name[100];
    int salary;

    public:
    void getData()
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your salary: "<<endl;
        cin>>salary;
    }
    void printData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
const int size=3;
Employee t[size];
for(int i=0; i<size; i++)
{
    cout<<"Job:"<<(i+1)<<endl;
    t[i].getData();
}
for(int i=0; i<size; i++)
{
    cout<<"Job Details:"<<(i+1)<<endl;
    t[i].printData();

}
}