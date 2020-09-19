#include "iostream"
using namespace std;

char obtener_formato() {
	char frmt;
	do {
		cout << "Ingrese el formato de la hora (a para 12 horas AM/PM y b para 24 horas)." << endl;
		cout << "Formato: ";
		cin >> frmt;
		if (frmt!='a' && frmt!='b' && frmt!='A' && frmt!='B') {
			cout << endl << "Formato de hora invalido." << endl;
			cout << "Por favor ingrese solamente la letra a o la letra b" << endl << endl;
		}
	} while (frmt!='a' && frmt!='b' && frmt!='A' && frmt!='B');
	return frmt;
}

char am_o_pm() {
	char amopm;
	do {
		cout << "AM o PM? (Ingrese a para AM y p para PM.): " << endl;
		cout << "Respuesta: ";
		cin >> amopm;
		if (amopm!='a' && amopm!='p' && amopm!='A' && amopm!='P') {
			cout << endl << "Por favor ingrese solamente la letra a o la letra p" << endl << endl;
		}
	} while (amopm!='a' && amopm!='p' && amopm!='A' && amopm!='P');
	return amopm;
}

int iv(int max, string var_name) {
	int num;
	do {
		cout << "Ingrese el valor de " << var_name << ": ";
		cin >> num;
		if (num>max) {
			cout << endl << "El valor de " << var_name << " debe ser como maximo " << max << endl;
			if (max==12) {
				cout << "(hora en formato 12 horas)" << endl;
			}
			if (max==24) {
				cout << "(hora en formato 24 horas)" << endl;
			}
			cout << "Intentelo nuevamente." << endl;
		}
		if (num<0) {
			cout << endl << "El valor de " << var_name << " no puede ser negativo." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
		if (max==12 && num<1) {
			cout << endl << "No se permite el valor 0 horas en formato horario 12 horas." << endl;
			cout << "Intentelo nuevamente." << endl;
			// Para causar repeticion del bucle
			num = 25;
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
	char ampm, formato;
	int h, m, s, h30, m30, s30;

	cout << "Programa que calcula la hora 30 segundos adelantada." << endl;
	formato = obtener_formato();
	cout << "Por favor ingrese la hora actual." << endl;

	if (formato=='a' || formato=='A') {
		h = iv(12,"las horas");
	} else {
		h = iv(24,"las horas");
	}

	m = iv(59,"los minutos");
	s = iv(59,"los segundos");
	
	if (formato=='a' || formato=='A') {
		ampm = am_o_pm();
	}

	h30 = h;
	m30 = m;
	s30 = s+30;

	if (s30>=60) {
		m30++;
		s30 -= 60;
	}
	if (m30>=60) {
		h30++;
		m30 -= 60;
	}
	if (formato=='a' || formato=='A') {
		if (h30>12) {
			h30 = 1;
		}
	} else {
		if (h30>23) {
			h30 = 0;
		}
	}

	// Cambio de AM/PM a las 11
	if (h==11 && h30==12) {
		if (ampm=='a') {
			ampm = 'p';
		} else {
			ampm = 'a';
		}
	}

	cout << endl << "La hora adelantada 30 segundos es ";
	agr_cero_si_m10(h30);
	cout << ":";
	agr_cero_si_m10(m30);
	cout << ":";
	agr_cero_si_m10(s30);

	if (formato=='a' || formato=='A') {
		if (ampm=='a') {
			cout << " AM" << endl;
		} else {
			cout << " PM" << endl;
		}
	}
	cout << endl << endl;
	return 0;
}
