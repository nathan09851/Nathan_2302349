#include <iostream>
using namespace std;
int Area(int lenght,int breath)
{
    return lenght*breath;
}
float Area(float radius)
{
    return radius*radius*3.14;
}
double Area(double base,double height)
{
    return base*height*0.5;
}
int main()
{
    int lenght,breath;
    float radius;
    double base,height;

    cout<<"Enter the lenght and breath of the rectangle:";
    cin>>lenght>>breath;
    int ar1= Area(lenght,breath);
    cout<<"The area of the retangle is:"<<ar1;
     cout<<"\nEnter the radius of the circle:";
    cin>>radius;
      int ar2= Area(radius);
    cout<<"The area of the circle is:"<<ar2;
     cout<<"\nEnter the base and height of the triangle:";
    cin>>base>>height;
  int ar3= Area(base,height);
    cout<<"The area of the triangle is:"<<ar3;
}