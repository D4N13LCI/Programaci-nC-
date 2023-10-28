#include <iostream>
using namespace std;
int main () {
	int n1, n2;
	cout << "Ingrese la primer nota" << endl;
	cin >> n1;
	cout << "Ingrese la segunda nota" << endl;
	cin >> n2;	
	if (n1 > 80 || n2 > 80){
		cout << "Usted aprobo" << endl;
	} else {
		cout << "Usted reprobo" << endl;			
	}
}
