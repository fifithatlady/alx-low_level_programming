#include <iostream>
using namespace std;

int main() {
  int a = 1, b = 2, c, i;

  cout << a << ", " << b;

  for (i = 3; i <= 98; i++) {
    c = a + b;
    cout << ", " << c;
    a = b;
    b = c;
  }
  cout << endl;
  return 0;
}
