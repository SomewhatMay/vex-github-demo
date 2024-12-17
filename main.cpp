#include <iostream>

#include "drivetrain.h"
#include "intake.h"

using namespace std;

int main() {
  cout << "Started robot!\n";
  move_forward(10);
  run_intake();

  return 0;
}