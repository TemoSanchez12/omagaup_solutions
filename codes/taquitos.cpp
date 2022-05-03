#include <iostream>
using namespace std;

struct Nodo {
  int tacos;
  Nodo *siguiente;
};

void insetar(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *&);
int eliminar(Nodo *&, Nodo *&);
int contar(Nodo *&, Nodo *&);

int main() {

  Nodo *frente = NULL;
  Nodo *fin = NULL;

  int m = 0, totales = 0, t = 0, n = 0;
  cin >> n;

  for (int j = 0; j < n; j++) {
    cin >> m;

    switch(m) {
      case 1: 
        cin >> t;
        insetar(frente, fin, t);
        break;
      case 2:
        totales += eliminar(frente, fin);
        break;

      case 3:
        cout << contar(frente, fin) << endl;
        break;
      case 4: 
        cout << totales << endl;
        break;
    }
  }



  return 0;
}

bool colaVacia(Nodo *&frente) {
  return (frente == NULL);
};

void insetar(Nodo *&frente, Nodo *&fin, int valor) {
  Nodo *nuevoNodo = new Nodo();
  nuevoNodo->tacos = valor;
  nuevoNodo->siguiente = NULL;

  if (colaVacia(frente)) {
    frente = nuevoNodo;
  } else {
    fin->siguiente = nuevoNodo;
  }
  fin = nuevoNodo;
}

int eliminar(Nodo *&frente, Nodo *&fin) {
  int valor = 0;
  if (frente != NULL) {
    valor = frente->tacos;
  }
  Nodo *aux = frente;
  
  if (frente == fin) {
    frente = NULL;
    fin = NULL;
  } else {
    frente = frente->siguiente;
  }
  delete aux;
  return valor;
}

int contar(Nodo *&frente, Nodo *&fin) {
  int cont = 0;

  Nodo *aux = frente;

  while (aux != NULL) {
    cont++;
    aux = aux->siguiente;
  }
  
  return cont;
}