#include <iostream>

using namespace std;

int main() {
  // Declaramos las variables
  int sueldo, sueldoBasico;

  // Pedimos al usuario que ingrese el sueldo
  cout << "Ingrese el sueldo: ";
  cin >> sueldo;

  // Declaramos la variable del sueldo básico
  sueldoBasico = 450;

  // Calculamos el aumento del sueldo
  if (sueldo > sueldoBasico) {
    if (sueldo <= 1000) {
      // Aumento del 10%
      sueldo += (sueldo * 0.1);
    } else {
      // Aumento del 25% y un bono del 2%
      sueldo += (sueldo * 0.25);
      sueldo += (sueldo * 0.02);
    }
  }

  // Imprimimos el nuevo sueldo
  cout << "El nuevo sueldo es: " << sueldo << endl;

  return 0;
}
