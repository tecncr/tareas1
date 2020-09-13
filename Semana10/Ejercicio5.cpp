// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
int ingresar_validar(string nombre_var, SIN_TIPO max_string, int max);
int factorial(float num);

int ingresar_validar(string nombre_var, SIN_TIPO max_string, int max) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (max<=num) {
			cout << "El valor de " << nombre_var << " tiene que ser menor que " << max_string << max << endl;
			if (nombre_var=="N") {
				cout << "Esto es debido a una limitacion de PSeInt." << endl;
			}
			cout << "Inténtelo nuevamente." << endl;
		}
		if (num<0) {
			cout << "El valor de " << nombre_var << " no puede ser negativo." << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
	} while (max<=num || num<0);
	return num;
}

int factorial(float num) {
	int fact;
	int i;
	fact = 1;
	for (i=1;i<=num;i++) {
		fact = fact*i;
	}
	return fact;
}

int main() {
	int a;
	int b;
	int n;
	int n_max;
	float sumatoria;
	float termino;
	sumatoria = 0;
	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "a/1 - a+b/2 + a+2b/3 - a+3b/4 + ... + a+nb/n+1" << endl;
	cout << "" << endl;
	// n limitada a 11 para evitar desbordamiento (problema de PSeInt)
	n_max = ingresar_validar("N","",12);
	a = ingresar_validar("A","el de N: ",n_max);
	b = ingresar_validar("B","el de N: ",n_max);
	for (n=0;n<=n_max;n++) {
		termino = factorial(n+1)/(a+n*b);
		if (n%2>0) {
			termino = termino*(-1);
		}
		sumatoria = sumatoria+termino;
	}
	cout << "" << endl;
	cout << "La sumatoria de los " << n_max << " primeros términos de la serie es " << sumatoria << endl;
	return 0;
}

