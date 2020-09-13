#include "iostream"
using namespace std;


int iv(int max, string var_name) {
	int num;
	do {
		cout << "Ingrese el valor de " << var_name;
		cin >> num;
		if (num>max) {
			cout << "El valor de " << var_name << " debe ser como maximo " << max << endl;
			if (max==12) {
				cout << "(hora en formato 12 horas)" << endl;
			}
			cout << "Intentelo nuevamente." << endl;
		}
		if (num<0) {
			cout << "El valor de " << var_name << " no puede ser negativo." << endl;
			cout << "Intentelo nuevamente." << endl;
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

int main(int argc, char * argv[]){

	int h, h30, m, m30, s, s30;

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

