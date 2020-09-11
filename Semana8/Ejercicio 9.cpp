#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	int a;
	int b;
	int num;
	a = 0;
	b = 0;
	cout << "Programa que muestra numeros en forma de triangulo." << endl;
	cout << "Ingrese el numero de filas: " << endl;
	cin >> num;
	// Salto de linea
	cout << "" << endl;
	for (a=1;a<=num;a++) {
		for (b=1;b<=a;b++) {
			cout << b;
		}
		// Salto de linea
		cout << "" << endl;
	}
	return 0;
}

