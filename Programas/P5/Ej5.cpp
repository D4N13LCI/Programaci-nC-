#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3, n4;
	float por;
    cout << "\n\t Suma de 4 numeros" << endl;
    cout << "\t1. Ingrese la 1er nota" << endl;
	cin >> n1;
    cout << "\t2. Ingrese la 2da nota" << endl;
	cin >> n2; 	
    cout << "\t3. Ingrese la 3ra nota" << endl;
	cin >> n3; 	
    cout << "\t4. Ingrese la 4ta nota" << endl;
	cin >> n4;
	int sum = n1+n2+n3+n4;
    cout << "\t1. la suma es:" << sum << endl;	
	
	if (sum > 50)
	{
		cout << "\t1. Usted obtuvo el 1% de la suma total" << endl;
		por = sum * 0.01;
		cout << "\t1. El promedio es:" << por << endl;
	} else {
		cout << "\t1. Usted obtuvo el 1.2% de la suma total" << endl;		
		por = sum * 0.012;
		cout << "\t1. el porcentaje de la suma es:"<< por << endl;
	}
	
	

}
