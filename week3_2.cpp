#include<iostream>
using namespace std;
void SwapNumbers(int a,int b)
{
int c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<"before the swap:"<<a<<b;

    SwapNumbers(a,b);  

    cout<<"after the swap:"<<a<<b;
return 0;

}
