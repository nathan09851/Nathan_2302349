#include <iostream>
using namespace std;
class complex
{

public: 
     int real,img;
    
complex(int r = 0 ,int i= 0)
           {
            real = r;
            img = i ;
           }
complex operator+(complex &c)
{
return complex (real+c.real, img + c.img);
//                   3    1      4      2
}
};

int main()
{
    complex c1(3,4), c2(1,2);
    complex c3=c1+c2;
    cout << "sum: "  << c3.real << "+" << c3.img << "i" ;
}