// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
int ingresar_validar_positivo();
int ingresar_validar_bin();

int ingresar_validar_positivo() {
	int num;
	do {
		cout << "Ingrese el número binario que desee convertir: ";
		cin >> num;
		if (num<0) {
			cout << "El número ingresado no puede ser negativo." << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
	} while (num<0);
	return num;
}

int ingresar_validar_bin() {
	int binario;
	int in;
	int tmp;
	int u_cifra;
	in = ingresar_validar_positivo();
	tmp = in;
	while (tmp>0) {
		// Verificacion de digitos binarios
		u_cifra = tmp%10;
		tmp = int(tmp/10);
		if (u_cifra>1) {
			cout << "El número ingresado contiene dígitos no binarios." << endl;
			cout << "Inténtelo nuevamente." << endl;
			in = ingresar_validar_positivo();
			tmp = in;
		}
	}
	binario = in;
	return binario;
}

int main() {
	int bin;
	int dec;
	int tmp;
	int u;
	int x;
	bin = ingresar_validar_bin();
	tmp = bin;
	x = 1;
	dec = 0;
	// Conversion de binario a decimal mediante "divisiones sucesivas inversas"
	while (bin>0) {
		u = bin%10;
		bin = int(bin/10);
		dec = dec+(u*x);
		x = 2*x;
	}
	cout << "" << endl;
	cout << "El numero binario " << tmp << " convertido a decimal es: " << dec << endl;
	return 0;
}

