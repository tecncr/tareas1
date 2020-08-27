#include "iostream"
#include <iomanip>
using namespace std;

int main(int argc, char * argv[]){

	string nombre;
	int nacionalidad, cantidad;
	char talla, sexo;
	float preciou, subtotal, pdscto, descuento, montofinal;

	cout << "Programa que determina el monto a pagar por los productos comprados." << endl;
	cout << "Ingrese el nombre del comprador:" << endl;
	cin >> nombre;
	cout << "Ingrese el precio unitario de los elementos comprados: S/ ";
	cin >> preciou;
	cout << "Ingrese la cantidad de elementos comprados: ";
	cin >> cantidad;

	do {
		cout << "Ingrese la nacionalidad del cliente. (1 o 2): ";
		cin >> nacionalidad;
		if (nacionalidad!=1 && nacionalidad!=2) {
			cout << "El nacionalidad ingresado no es valido." << endl;
		}
	} while (nacionalidad!=1 && nacionalidad!=2);
	
	do {
		cout << "Ingrese el sexo al que esta dirigida la ropa comprada." << endl;
		cout << "(H para Hombres y M para Mujeres): ";
		cin >> sexo;
		if (sexo!='h' && sexo!='H' && sexo!='m' && sexo!='M') {
			cout << "El sexo ingresado no es valido." << endl;
		}
	} while (sexo!='h' && sexo!='H' && sexo!='m' && sexo!='M');
	
	do {
		cout << "Ingrese la talla de la ropa comprada." << endl;
		cout << "N para Ninio" << endl;
		cout << "J para Joven." << endl;
		cout << "A para Adulto." << endl;
		cout << "Opcion: ";
		cin >> talla;
		if (talla!='n' && talla!='n' && talla!='j' && talla!='j' && talla!='a' && talla!='a') {
			cout << "La talla ingresada no es valida." << endl;
		}
	} while (talla!='n' && talla!='n' && talla!='j' && talla!='j' && talla!='a' && talla!='a');
	
	switch (nacionalidad) {
	case 1:
		switch (sexo) {
		case 'h':
			switch (talla) {
			case 'n': pdscto = 0.05;
				      break;
			case 'N': pdscto = 0.05;
				      break;
			case 'j': pdscto = 0.07;
				      break;
			case 'J': pdscto = 0.07;
			          break;
			case 'a': pdscto = 0.1;
				      break;
			case 'A': pdscto = 0.1;
				      break;
			}
			break;
		case 'H':
			switch (talla) {
			case 'n': pdscto = 0.05;
				      break;
			case 'N': pdscto = 0.05;
				      break;
			case 'j': pdscto = 0.07;
				      break;
			case 'J': pdscto = 0.07;
			          break;
			case 'a': pdscto = 0.1;
				      break;
			case 'A': pdscto = 0.1;
				      break;
			}
			break;
		case 'm':
			switch (talla) {
			case 'n': pdscto = 0.06;
				      break;
			case 'N': pdscto = 0.06;
				      break;
			case 'j': pdscto = 0.09;
				      break;
			case 'J': pdscto = 0.09;
				      break;
			case 'a': pdscto = 0.12;
				      break;
			case 'A': pdscto = 0.12;
				      break;
			}
			break;
		case 'M':
			switch (talla) {
			case 'n': pdscto = 0.06;
				      break;
			case 'N': pdscto = 0.06;
				      break;
			case 'j': pdscto = 0.09;
				      break;
			case 'J': pdscto = 0.09;
				      break;
			case 'a': pdscto = 0.12;
				      break;
			case 'A': pdscto = 0.12;
				      break;
			}
			break;
		}
		break;
	case 2:
		switch (sexo) {
		case 'h':
			switch (talla) {
			case 'n': pdscto = 0.04;
				      break;
			case 'N': pdscto = 0.04;
				      break;
			case 'j': pdscto = 0.05;
				      break;
			case 'J': pdscto = 0.05;
				      break;
			case 'a': pdscto = 0.09;
				      break;
			case 'A': pdscto = 0.09;
				      break;
			}
			break;
		case 'H':
			switch (talla) {
			case 'n': pdscto = 0.04;
				      break;
			case 'N': pdscto = 0.04;
				      break;
			case 'j': pdscto = 0.05;
				      break;
			case 'J': pdscto = 0.05;
				      break;
			case 'a': pdscto = 0.09;
				      break;
			case 'A': pdscto = 0.09;
				      break;
			}
			break;
		case 'm':
			switch (talla) {
			case 'n': pdscto = 0.03;
				      break;
			case 'N': pdscto = 0.03;
				      break;
			case 'j': pdscto = 0.06;
				      break;
			case 'J': pdscto = 0.06;
				      break;
			case 'a': pdscto = 0.1;
				      break;
			case 'A': pdscto = 0.1;
				      break;
			}
			break;
		case 'M':
			switch (talla) {
			case 'n': pdscto = 0.03;
				      break;
			case 'N': pdscto = 0.03;
				      break;
			case 'j': pdscto = 0.06;
				      break;
			case 'J': pdscto = 0.06;
				      break;
			case 'a': pdscto = 0.1;
				      break;
			case 'A': pdscto = 0.1;
				      break;
			}
			break;
		}
		break;
	}

	subtotal = preciou * cantidad;
	descuento = subtotal * pdscto;
	montofinal = subtotal - descuento;

	cout << "El subtotal es S/ " << fixed << setprecision(2) << subtotal << endl;
	cout << "El cliente " << nombre << " es elegible para un descuento del " << pdscto*100 << "%" << endl;
	cout << "Equivalente a  S/ " << fixed << setprecision(2) << descuento << endl;
	cout << "Monto final:   S/ " << fixed << setprecision(2) << montofinal << endl;
	
	return 0;
}