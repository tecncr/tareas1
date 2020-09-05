#include "iostream"

using namespace std;
int main() {
	int conteo, maximo, minimo, numero, suma;
	float media;
	cout << "\tHallemos el maximo, minimo y la media de N numeros dados " << endl;
	cout << "Ingrese un numero positivo:" << endl;
	cin >> numero;
	suma = 0;
	conteo = 0;
	media = 0;
	maximo = 0;
	minimo = 99999;
	if (numero>0) {
		while (numero>0) {
			if (numero>maximo) {
				maximo = numero;
			}
			if (numero<minimo) {
				minimo = numero;
			}
			conteo = conteo+1;
			suma = suma+numero;
			cout << "Ingrese un numero positivo: " << endl;
			cin >> numero;
		}
		media = suma/conteo;
		cout << "El mayor de los numeros es: " << maximo << endl;
		cout << "El menor de los numeros es: " << minimo << endl;
		cout << "La media de la lista de numeros dados es : " << media << endl;
	} else {
		if (numero<0) {
			cout << "La lista de numeros solo se comprende de numeros positivos " << endl;
		}
	}
	cout << "-----------------------------------------------------------------------" << endl;
	cout << " Gracias " << endl;
	return 0;
}

