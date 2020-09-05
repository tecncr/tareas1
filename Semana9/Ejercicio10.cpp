//Ejercicio 10
#include "iostream"
using namespace std;
int main(int argc, char *argv[])
{
	int numero, perfecto, x;
	cout << "Numeros perfectos " << endl;
	cout << " Ingrese un numero " << endl;
	cin >> numero;
	x = 2;
	perfecto = 0;
	while (x<=numero) {
		if (numero%x==0) {
			perfecto = perfecto+(numero/x);
		}
		x = x+1;
	}
	if (perfecto==numero) {
		cout << " El numero " << numero << " es un numero perfecto " << endl;
	} else {
		cout << " El numero " << numero << " no es un numero perfecto " << endl;
	}
	return 0;
}
