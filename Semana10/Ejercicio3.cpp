// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
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
int ingresar_validar(SIN_TIPO nombre_var);

int ingresar_validar(SIN_TIPO nombre_var) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (num<0) {
			cout << "El valor de " << nombre_var << " no puede ser negativo." << endl;
		}
	} while (num<0);
	return num;
}

int main() {
	int fact_n;
	int n;
	int n_max;
	float sumatoria;
	float termino;
	int x;
	sumatoria = 0;
	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "1 + x + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!" << endl;
	cout << "" << endl;
	x = ingresar_validar("x");
	n_max = ingresar_validar("n (número de términos)");
	for (n=1;n<=n_max;n++) {
		termino = (2*pow(x,n))/(n+1);
		sumatoria = sumatoria+termino;
	}
	cout << "" << endl;
	cout << "La sumatoria de la serie es: " << sumatoria << endl;
	return 0;
}

