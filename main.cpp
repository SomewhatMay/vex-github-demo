#include <iostream>

#include "drivetrain.h"

using namespace std;

int main() {
  cout << "Started robot!\n";
  move_forward(10);
  turn(31.7);

  return 0;
}