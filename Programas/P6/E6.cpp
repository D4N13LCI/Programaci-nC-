#include <iostream>
using namespace std;
int main () {
	int n1, n2, n3;
	cout << "\n\t Numeros mayores" << endl;
	cout << "\n\t Ingrese el primer numero:" << endl;
	cin >> n1;
	cout << "\n\t Ingrese el segundo numero:" << endl;
	cin >> n2;
	cout << "\n\t Ingrese el tercer numero:" << endl;
	cin >> n3;		
	if (n1 > n2 || n1 > n3) {
		cout << "\n\t el numero mayor es:" << n1 << endl;
	} else if (n2 > n1 || n2 > n3) {
		cout << "\n\t el numero mayor es:" << n2 << endl;
	} else {
		cout << "\n\t el numero mayor es:" << n3 << endl;
	}
}
