#include "iostream"
#include <iomanip>
using namespace std;

bool confirmar(string pregunta);
// Subproceso que solicita confirmacion al usuario antes de cualquier operacion

bool confirmar(string pregunta)
{
	string opc;
	bool procede;

	do {
		cout << "" << endl;
		cout << pregunta << endl;
		cout << "Escriba s para si, n para no: " << endl;
		cin >> opc;
		if (opc!="s" && opc!="n" && opc!="S" && opc!="N") {
			cout << "Opcion invalida." << endl;
		}
	} while (opc!="s" && opc!="n" && opc!="S" && opc!="N");
	if (opc=="s" || opc=="S") {
		procede = true;
	}
	if (opc=="n" || opc=="N") {
		procede = false;
	}

	return procede;
}

// Comienzo del programa
int main(int argc, char * argv[]){
	
	float deposito, retiro, saldo;
	bool mantenersesion;
	int op;

	saldo = 2000;
	mantenersesion = true;

	do {
		do {
			cout << "Bienvenido a su Cajero Automatico." << endl;
			cout << "Seleccione una opcion del menu:" << endl;
			cout << "1. Retiro" << endl;
			cout << "2. Saldo" << endl;
			cout << "3. Deposito" << endl;
			cout << "4. Salir" << endl;
			cout << "Digite su opcion: " << endl;
			cin >> op;
			if (op!=1 && op!=2 && op!=3 && op!=4) {
				cout << "Por favor ingrese una opcion valida." << endl;
				cout << endl;
			}
		} while (op!=1 && op!=2 && op!=3 && op!=4);
		switch (op) {
		case 1:
			cout << "Ingrese el monto del retiro: " << endl;
			cin >> retiro;
			if (retiro<=saldo) {
				if (confirmar("Desea confirmar el retiro?")==true) {
					saldo = saldo-retiro;
					cout << "Se realizo un retiro de S/ " << fixed << setprecision(2) << retiro << endl;
					cout << "Su nuevo saldo disponible es: S/ " << fixed << setprecision(2) << saldo << endl;
				} else {
					cout << "Operacion Cancelada." << endl;
					cout << endl;
				}
			} else {
				cout << "No cuenta con saldo suficiente para realizar dicha operacion." << endl;
			}
			if (confirmar("Desea realizar otra operacion?")==true) {
				mantenersesion = true;
			} else {
				mantenersesion = false;
			}
			break;
		case 2:
			cout << "Su saldo disponible es S/ " << fixed << setprecision(2) << saldo << endl;
			if (confirmar("Desea realizar otra operacion?")==true) {
				mantenersesion = true;
			} else {
				mantenersesion = false;
			}
			break;
		case 3:
			cout << "Ingrese el monto del deposito: " << endl;
			cin >> deposito;
			if (confirmar("Desea confirmar el deposito?")) {
				saldo = saldo+deposito;
				cout << "Se realizo un deposito de S/ " << fixed << setprecision(2) << deposito << endl;
				cout << "Su nuevo saldo disponible es: S/ " << fixed << setprecision(2) << saldo << endl;
			} else {
				cout << "Operacion Cancelada." << endl;
				cout << endl;
			}
			if (confirmar("Desea realizar otra operacion?")==true) {
				mantenersesion = true;
			} else {
				mantenersesion = false;
			}
			break;
		case 4:
			mantenersesion = false;
			break;
		}
	} while (mantenersesion==true);
	cout << endl;
	cout << "Gracias por usar su cajero automatico. Hasta luego." << endl;
	return 0;
}

