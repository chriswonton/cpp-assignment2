#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int num; // take user input
  int numberArray[10]; // declare numberArray
  for (int i = 0; i < 10; ++i) {
    cout << "enter a number (" << i + 1 << ")" << endl;
    cin >> num;
    numberArray[i] = num; // add user input into the numberArray
  }

  // print the numbers in the array
  for (int i = 0; i < 10; ++i) {
    cout << numberArray[i] << " ";
  }
}
