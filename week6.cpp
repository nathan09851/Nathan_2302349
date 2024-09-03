#include <iostream>
using namespace std;
class MyClass {
public:
inline void inlineFunction()
 {
cout << "This is an inline function.\n";
 }
};

int main() {
    MyClass obj;
    obj.inlineFunction();
    return 0;
}