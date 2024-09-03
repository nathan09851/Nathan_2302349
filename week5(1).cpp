#include <iostream>
#include <string>
using namespace std;
 struct {
    int myNum;
    string myString;
  } myStructure;

int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;

  myStructure.myNum = 232338;
  myStructure.myString = "Basic structure code";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}
