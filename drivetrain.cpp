#include "drivetrain.h"

#include <iostream>

using namespace std;

void move_forward(int distance) {
  cout << "moved robot " << distance << " units.\n";
}

void turn(double radians) {
  cout << "turned robot " << radians << " radians.\n";
}