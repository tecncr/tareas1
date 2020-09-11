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
int ingresar_validar(SIN_TIPO orden);

// Subproceso para validar numeros
int ingresar_validar(SIN_TIPO orden) {
	int numero_ingresado;
	do {
		cout << "Ingrese el " << orden << " número." << endl;
		cin >> numero_ingresado;
		if (numero_ingresado<1) {
			cout << "El numero ingresado no es válido. Por favor ingrese" << endl;
			cout << "un numero igual o superior a 1." << endl;
		}
	} while (numero_ingresado<1);
	return numero_ingresado;
}

int main() {
	int a;
	int b;
	int c;
	int div;
	int max;
	int mcm_acum;
	int mid;
	int min;
	mcm_acum = 1;
	cout << "Programa que calcula el MCM de tres números." << endl;
	a = ingresar_validar("primer");
	b = ingresar_validar("segundo");
	c = ingresar_validar("tercer");
	// Condicionales que ordenan los numeros de menor a mayor en variables
	if (a<=b && a<=c && b<=c) {
		min = a;
		mid = b;
		max = c;
	} else {
		if (a<=b && a<=c && c<=b) {
			min = a;
			mid = c;
			max = b;
		} else {
			if (b<=a && b<=c && a<=c) {
				min = b;
				mid = a;
				max = c;
			} else {
				if (b<=a && b<=c && c<=a) {
					min = b;
					mid = c;
					max = a;
				} else {
					if (c<=a && c<=b && a<=b) {
						min = c;
						mid = a;
						max = b;
					} else {
						if (c<=a && c<=b && b<=a) {
							min = c;
							mid = b;
							max = a;
						}
					}
				}
			}
		}
	}
	do {
		for (div=2;div<=max;div++) {
			do {
				if (min%div==0 || mid%div==0 || max%div==0) {
					mcm_acum = mcm_acum*div;
				}
				if (min%div==0) {
					min = min/div;
				}
				if (mid%div==0) {
					mid = mid/div;
				}
				if (max%div==0) {
					max = max/div;
				}
			} while (min%div==0 || mid%div==0 || max%div==0);
		}
	} while (min!=1 && mid!=1 && max!=1);
	cout << "El MCM de " << a << ", " << b << " y " << c << " es: " << mcm_acum << endl;
	return 0;
}

