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
int iv(int max, SIN_TIPO var_name);
void agr_cero_si_m10(float num);

int iv(int max, SIN_TIPO var_name) {
	int num;
	do {
		cout << "Ingrese el valor de " << var_name;
		cin >> num;
		if (num>max) {
			cout << "El valor de " << var_name << " debe ser como máximo " << max << endl;
			if (max==12) {
				cout << "(hora en formato 12 horas)" << endl;
			}
			cout << "Inténtelo nuevamente." << endl;
		}
		if (num<0) {
			cout << "El valor de " << var_name << " no puede ser negativo." << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
	} while (num>max || num<0);
	return num;
}

void agr_cero_si_m10(float num) {
	if (num<10) {
		cout << "0" << num;
	} else {
		cout << num;
	}
}

int main() {
	int h;
	int h30;
	int m;
	int m30;
	int s;
	int s30;
	cout << "Programa que calcula la hora 30 segundos adelantada." << endl;
	cout << "Por favor ingrese la hora actual (en formato 12 horas)" << endl;
	h = iv(12,"las horas");
	m = iv(59,"los minutos");
	s = iv(59,"los segundos");
	h30 = h;
	m30 = m;
	s30 = s+30;
	if (s30>=60) {
		m30 = m30+1;
		s30 = s30-60;
	}
	if (m30>=60) {
		h30 = h30+1;
		m30 = m30-60;
	}
	if (h30>12) {
		h30 = 1;
	}
	cout << "La hora adelantada 30 segundos es ";
	agr_cero_si_m10(h30);
	cout << ":";
	agr_cero_si_m10(m30);
	cout << ":";
	agr_cero_si_m10(s30);
	cout << "" << endl;
	return 0;
}

