// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int i;
	int n1;
	int n2;
	int n3;
	int num;
	int sumatoria;
	cout << "Algoritmo que calcula la suma de los N primeros números de Fibonacci" << endl;
	do {
		cout << "Ingrese el valor de N: ";
		cin >> num;
		if (num<0) {
			cout << "N no admite valores negativos." << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
		if (num>45) {
			cout << "Debido a limitaciones de PSeInt, N solo admite valores hasta 45." << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
	} while (num<0 || num>45);
	n1 = 0;
	n2 = 1;
	n3 = 0;
	sumatoria = 0;
	for (i=1;i<=num;i++) {
		sumatoria = sumatoria+n1;
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
	}
	cout << "La sumatoria de los " << num << " primeros numeros de Fibonacci es: " << sumatoria << endl;
	return 0;
}

