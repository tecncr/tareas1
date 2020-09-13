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
int ingresar_validar(SIN_TIPO nombre_var);
void imprimir_serie(float num);

int ingresar_validar(SIN_TIPO nombre_var) {
	int num;
	do {
		cout << "Ingrese l" << nombre_var << ": ";
		cin >> num;
		if (num<0) {
			cout << "L" << nombre_var << " no puede ser negativa." << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
	} while (num<0);
	return num;
}

void imprimir_serie(float num) {
	int a;
	int denom;
	int np_linea;
	np_linea = 0;
	for (a=1;a<=num;a++) {
		denom = (a*(a+1)/2)*4;
		cout << "1/" << denom << ",";
		// Salto de linea cada 8 terminos para visualizacion correcta
		np_linea = np_linea+1;
		if (np_linea==8) {
			cout << "" << endl;
			np_linea = 0;
		}
	}
	cout << " fin de la serie.";
	cout << "" << endl;
}

int main() {
	int n;
	cout << "Programa que imprime términos de la serie 1/4, 1/12, 1/24, 1/40, 1/60, ..." << endl;
	n = ingresar_validar("a cantidad de términos que desee imprimir");
	cout << "Los términos de la serie son: " << endl;
	imprimir_serie(n);
	return 0;
}

