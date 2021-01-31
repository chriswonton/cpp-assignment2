#include <iostream>

using namespace std;

void zeroBoth(int &num1, int &num2) {
  // set both # parameters to 0
  num1 = 0;
  num2 = 0;
}

int main(int argc, char **argv) {
  int a = 5;
  int b = 10;
  cout << "a: " << a << ", b: " << b << endl;
  // test the function
  zeroBoth(a, b);
  cout << "a: " << a << ", b: " << b << endl;
}
