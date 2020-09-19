#include "iostream"
using namespace std;

int ingresar_validar() {
	int n;
	do {
		cout << "Ingrese el numero de filas: ";
		cin >> n;
		if (n<=0) {
			cout << endl << "El numero ingresado no es valido." << endl;
			cout << "Por favor ingrese numeros mayores o iguales que 1." << endl << endl;
		}
	} while (n<=0);
	return n;
}

void imprimir_triangulo(int filas) {
	int a = 0, b = 0;

	for (a=filas; a>=1; a--) {
		for (b=1; b<=a; b++) {
			cout << b << " ";
		}
		cout << endl;
	}
}

int main(int argc, char * argv[]){
	int num;
	cout << "Programa que muestra numeros en forma de triangulo invertido." << endl;
	num = ingresar_validar();
	cout << endl;
	imprimir_triangulo(num);
	cout << endl;
	return 0;
}
