#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int xa, xb, ya, yb;
  cin >> xa >> ya >> xb >> yb;

  double distancia = 0;

  distancia = sqrt( pow((xb - xa), 2) + pow((yb - ya), 2) );
  
  if (distancia >= 150) {
    cout << "sana";
  } else {
    cout << "insana";
  }

  return 0;
}