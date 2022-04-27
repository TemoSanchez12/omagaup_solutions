#include <iostream>
#include <map>

using namespace std;

int main() {

  map <int, int> puertas;
  int n = 0, puerta = 0, llave = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> puerta;
    puertas.insert(pair <int, int> (puerta, i));
  }

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> llave;
    if (puertas.count(llave) == 0) {
      cout << "0 ";
    } else {
      cout << puertas.at(llave) << " ";
    }
  }

  return 0;
}