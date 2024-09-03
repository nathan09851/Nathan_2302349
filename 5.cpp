#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the 2 numbers";
    cin>>num1>>num2;
    if(num1>num2){
    cout<<"greatest number is:"<<num1;
    }
    else if(num2>num1){
     cout<<"greatest number is:"<<num2;}
     else{
        cout<<"both are equal.";
     }
return 0;
}