#include <iostream>

using namespace std;

int main() {
  
  int op;
  float b, a, d1, d2;

  
  do {
    cout << "\n\t Menu de operaciones" << endl;
    cout << "\t1. Calcular area de un triangulo" << endl;
    cout << "\t2. Calcular area de un rectangulo" << endl;
    cout << "\t3. Calcular area de un rombo" << endl;
    cout << "\t4. Salir" << endl;
    cout << "\n\tIngrese una opcion: ";
    cin >> op;

    
    if (op < 1 || op > 4) {
      cout << "\n\t Opcion invalida. Intente nuevamente." << endl;
    }
  } while (op < 1 || op > 4);

  
  switch (op) {
    case 1: {
      
      cout << "\n\tIngrese la base del triangulo: ";
      cin >> b;
      cout << "\n\tIngrese la altura del triangulo: ";
      cin >> a;

     
      float a_trian = (b * a) / 2;

      
      cout << "\n\tEl área del triangulo es: " << a_trian << endl;
      break;
    }
    case 2: {
      
      cout << "\n\tIngrese la base del rectangulo: ";
      cin >> b;
      cout << "\n\tIngrese la altura del rectangulo: ";
      cin >> a;

      
      float a_rectan = b * a;

      
      cout << "\n\tEl area del rectangulo es: " << a_rectan << endl;
      break;
    }
    case 3: {
     
      cout << "\n\tIngrese la diagonal mayor del rombo: ";
      cin >> d1;
      cout << "\n\tIngrese la diagonal menor del rombo: ";
      cin >> d2;

 
      float a_romb = (d1 * d2) / 2;

      
      cout << "\n\tEl area del rombo es: " << a_romb << endl;
      break;
    }
    case 4: {
      
      cout << "\n\tSaliendo del programa..." << endl;
      break;
    }
  }

  return 0;
}

