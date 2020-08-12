#include "iostream"
#include <conio.h>
#include <iomanip> //para poder redondear
using namespace std;
int main(int argc, char* argv[])
{
	double aServicio, basico, incentivo, neto, porcentIncremento;
	string esJefe, tienePosgrado, tieneTitulo;

	cout << "Programa que calcula el sueldo neto de un trabajador." << endl;
	cout << "Ingrese el sueldo basico del trabajador: ";
	cin >> basico;
	cout << "Ingrese las unidades anuales de tiempo de servicio: ";
	cin >> aServicio;

	if (aServicio >= 1 and aServicio <= 5) {
		porcentIncremento = 0.1;
	}
	if (aServicio >= 6) {
		porcentIncremento = 0.15;
	}

	do {
		cout << "El trabajador es jefe? (si/no): ";
		cin >> esJefe;
		if (esJefe == "si") {
			porcentIncremento = porcentIncremento + 0.1;
		}
		if (esJefe != "si" and esJefe != "no") {
			cout << "Respuesta no valida, por favor ingrese solo si o no." << endl;
		}
	} while (!(esJefe == "si" or esJefe == "no"));

	do {
		cout << "El trabajador tiene titulo universitario? (si/no): ";
		cin >> tieneTitulo;
		if (tieneTitulo == "si") {
			porcentIncremento = porcentIncremento + 0.05;
			do {
				cout << "El trabajador tiene estudios de posgrado? (si/no): ";
				cin >> tienePosgrado;
				if (tienePosgrado == "si") {
					porcentIncremento = porcentIncremento + 0.12;
				}
				if (tienePosgrado != "si" and tienePosgrado != "no") {
					cout << "Respuesta no valida, por favor ingrese solo si o no." << endl;
				}
			} while (!(tienePosgrado == "si" or tienePosgrado == "no"));
		}
		if (tieneTitulo == "no") {
			tienePosgrado = "no";
		}
		if (tieneTitulo != "si" and tieneTitulo != "no") {
			cout << "Respuesta no valida, por favor ingrese solo si o no." << endl;
		}
	} while (!(tieneTitulo == "si" or tieneTitulo == "no"));

	incentivo = basico * porcentIncremento;
	neto = basico + incentivo;

	cout << endl << "El incentivo total es de                 S/ " << fixed << setprecision(2) << incentivo << endl;
	cout << "(Equivalente a un " << porcentIncremento * 100 << "% del sueldo basico.)" << endl;
	cout << "El sueldo neto del trabajador es de      S/ " << fixed << setprecision(2) << neto << endl;

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}