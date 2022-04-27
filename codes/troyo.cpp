#include <iostream>
using namespace std;

int main() {

  long acum = 0, numero = 0;
  cin >> numero;

  acum = (numero * (numero + 1)) / 2;

  cout << acum;
  return 0;
}