#include <iostream>

using namespace std;

int main() {
  
  float n1, n2, n3, prom;

 
  cout << "\n\tIngrese la primera nota: ";
  cin >> n1;
  cout << "\n\tIngrese la segunda nota: ";
  cin >> n2;
  cout << "\n\tIngrese la tercera nota: ";
  cin >> n3;

  
  prom = (n1 * 0.2) + (n2 * 0.3) + (n3 * 0.5);

  
  cout << "\n\tEl promedio es: " << prom << endl;

  return 0;
}

