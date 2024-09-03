#include<iostream>
using namespace std;
main() {
   float f, c;
   cout << "Enter temperature in Celsius: ";
   cin >> c;
   f= (c-32.0)*5.0/9.0;
   cout << "Equivalent Fahrenheit temperature is: " << f;
}