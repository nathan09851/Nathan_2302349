#include <iostream>
#include <string>
using namespace std;
class employee
{
    public: string employee_ID;
            string employee_Name;
            string employee_Address;
    void display()
          {
            cout<<"ID:\n"<< employee_ID;
            cout<<"Name:\n"<< employee_Name;         
            cout<<"Address:\n"<< employee_Address;
          }
};
class permanent_employee: public employee
{
    public: float Basic_pay;
            float DA;
            float HRA;
            float TA;
            void calculate_salary();
    
    void display_permanent()
          {
             cout<<"The HRA:\n"<< HRA<<endl;
            cout<<"The DA:\n"<< DA<<endl;
            cout<<"The TA:\n"<< TA<<endl;
          }
};
void permanent_employee:: calculate_salary()
    {
        if(Basic_pay<10001)
        {
             HRA=(Basic_pay*(20/100));
             DA=(Basic_pay*(80/100));
             TA=(Basic_pay*(40/100));
        }
        else if(Basic_pay>10001 && Basic_pay<20001)
        {
             HRA=(Basic_pay*(25/100));
             DA=(Basic_pay*(85/100));
             TA=(Basic_pay*(45/100));
        }
        else(Basic_pay>20001);
        {
        HRA=(Basic_pay*(30/100));
        DA=(Basic_pay*(90/100));
        TA=(Basic_pay*(50/100));  
        }
    
    }
class Manager: public permanent_employee
{
   public: string Advanced_salary;
           string vehicle;
           void display_manager()
          {
            cout<<"Advanced salary:\n"<< Advanced_salary;
            cout<<"The Vehicle:\n"<< vehicle;         
          }
};
int main()
{
Manager obj1;
cout<<"\n Enter your ID,Name and Address:\n";
cin>>obj1.employee_ID>>obj1.employee_Name>>obj1.employee_Address;
obj1.display();

cout<<"\n Enter your basic salary:";
cin>>obj1.Basic_pay;
obj1.calculate_salary();
obj1.display_permanent();

cout<<"\n Enter Advanced salary and your vehicle:";
cin>>obj1.Advanced_salary>>obj1.vehicle;
obj1.display_manager();

return 0;
}
