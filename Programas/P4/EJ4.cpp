 #include <iostream>

using namespace std;

int main() {
  // Declarar variables
  int a, b;

  // Solicitar números
  cout << "\n\tIngrese el primer número: ";
  cin >> a;
  cout << "\n\tIngrese el segundo número: ";
  cin >> b;

  // Realizar operaciones
  int suma = a + b;
  int resta = a - b;
  int multiplicacion = a * b;
  float division = (float)a / b;

  // Imprimir resultados
  cout << "\n\tLa suma es: " << suma << endl;
  cout << "\n\tLa resta es: " << resta << endl;
  cout << "\n\tLa multiplicación es: " << multiplicacion << endl;
  cout << "\n\tLa división es: " << division << endl;

  return 0;
}

