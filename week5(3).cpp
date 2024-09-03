#include <iostream>
using namespace std;

class MyClass {        
  public:               
    void myMethod()
    {
        cout<<"inside the class\n";
    }
    public:
    void thisMethod();
};

void MyClass::thisMethod() {
  cout << "outside the class";
}

int main() {
  MyClass myObj;    
  myObj.myMethod();  
  myObj.thisMethod();
  return 0;
}