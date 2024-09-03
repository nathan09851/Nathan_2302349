#include<iostream>
using namespace std;
float AreaRectangle(float lenght = 3,float breath = 2)
{
    return lenght*breath;
}
int main()
{
    float lenght,breath;
    cout<<"Enter the lenght and breath";
    cin>>lenght>>breath;

   float ar= AreaRectangle(lenght,breath);
         
    cout<<"The area of the rectangle is:"<<ar;

}


