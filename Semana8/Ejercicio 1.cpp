#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	int conteo, maximo, minimo, num, suma;
	float media;
	
	cout << "Programa que halla el maximo, minimo y la media de N numeros dados " << endl;
	cout << "Ingrese un numero positivo: " << endl;
	cin >> num;

	suma = 0;
	conteo = 0;
	media = 0;
	maximo = 0;
	minimo = 99999;

	if (num>0) {
		while (num>0) {
			if (num>maximo) {
				maximo = num;
			}
			if (num<minimo) {
				minimo = num;
			}
			conteo = conteo+1;
			suma = suma+num;
			cout << " Ingrese un numero que sea positivo " << endl;
			cin >> num;
		}
		media = suma/conteo;
		cout << "El mayor numero es: " << maximo << endl;
		cout << "El menor numero es: " << minimo << endl;
		cout << "El promedio de los numeros ingresados es: " << media << endl;
	} else {
		if (num<0) {
			cout << "Solo se admiten numeros positivos." << endl;
		}
	}

	return 0;
}