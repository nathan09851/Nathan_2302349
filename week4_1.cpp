#include<iostream>
using namespace std;
float AreaCircle(const float radius = 3)
{
    float pi=3.14;
    return radius*radius*pi;
}
int main()
{
    float radius;
    cout<<"Enter the radius";
    cin>>radius;

   float ar= AreaCircle(radius);
         
    cout<<"The area of the circle is:"<<ar;

}