 #include <iostream>

using namespace std;

int main() {
  // Declarar variables
  int a, b;

  // Solicitar n�meros
  cout << "\n\tIngrese el primer n�mero: ";
  cin >> a;
  cout << "\n\tIngrese el segundo n�mero: ";
  cin >> b;

  // Realizar operaciones
  int suma = a + b;
  int resta = a - b;
  int multiplicacion = a * b;
  float division = (float)a / b;

  // Imprimir resultados
  cout << "\n\tLa suma es: " << suma << endl;
  cout << "\n\tLa resta es: " << resta << endl;
  cout << "\n\tLa multiplicaci�n es: " << multiplicacion << endl;
  cout << "\n\tLa divisi�n es: " << division << endl;

  return 0;
}

