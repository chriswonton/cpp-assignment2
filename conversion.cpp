#include <iostream>
#include <string>

using namespace std;

double input() {
  double feet;
  double inches;
  cout << "enter amount of feet: " << endl;
  cin >> feet;
  cout << "enter amount of inches: " << endl;
  cin >> inches;
  // convert inches to feet, then add to total feet
  inches = inches / 12.0;
  feet += inches;
  return feet;
}

double calculate() {
  double feet = input();
  // 0.3048 meters in a foot
  // convert feet to meters
  double meters = feet / 3.048;
  return meters;
}

void output(double meters) {
  // subtract int of meters to get decimals
  double centimeters = meters - (int (meters));
  centimeters *= 100;
  // use int to get only meters
  int intMeters = int (meters);
  cout << intMeters << " meters and " << int (centimeters) << " centimeters" << endl;
}

int main(int argc, char **argv) {
  string inp;
  cout << "enter any string, \"exit\" to quit" << endl;
  cin >> inp;
  while (inp != "exit") {
    output(calculate());
    cout << "enter any string, \"exit\" to quit" << endl;
    cin >> inp;
  }
}
