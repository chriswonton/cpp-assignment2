#include <iostream>

using namespace std;

float addTax(float taxRate, float cost) {
  // convert percent to decimal
  taxRate = taxRate / 100.0;
  // add taxRate to cost
  cost = cost + (taxRate * cost);
  return cost;
}

int main(int argc, char **argv) {
  // test the function
  float taxRate = 15; // 15% sales tax
  float cost = 100; // $100 original cost
  cout << "tax rate: " << taxRate << "%" << endl;
  cout << "original cost: $" << cost << endl;
  cout << "new cost: " << addTax(taxRate, cost) << endl;
}
