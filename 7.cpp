#include <iostream>
using namespace std;
int main()
 {
    int player;
    cout << "Enter a number from 1 to 5";
    cin >> player;
  switch (player) 
  {
  case 1:
    cout << "Messi";
    break;
  case 2:
    cout << "CR7";
    break;
  case 3:
    cout << "Neymar Jr.";
    break;
  case 4:
    cout << "Kevin de bryne";
    break;
  case 5:
    cout << "Rodri";
    break;
    default:
    cout << "Invaid input";
  }
  return 0;
}