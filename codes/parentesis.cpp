#include <iostream>

using namespace std;

int main() {
  string cadena;
  cin >> cadena;
  int cont = 0;

  for (int i = 0; i < cadena.length(); i++) {
    if (cadena[i] == '(') {
      cont++;
    } else if (cadena[i] == ')') {
      cont--;
    }

    if (cont < 0) {
      break;
    }
  }

  string salida = cont != 0 ? "NO" : "SI";
  cout << salida;

  return 0;
}