#include "iostream"
#include <iomanip>
using namespace std;

int main(int argc, char * argv[]){
	
	char origen, talla, sexo;
	float subtotal, pdscto, descuento, montofinal;

	cout << "Programa que determina el monto a pagar por la ropa comprada." << endl;
	cout << "Ingrese el monto de la compra: S/ ";
	cin >> subtotal;

	do {
		cout << "Ingrese el origen de la ropa comprada." << endl;
		cout << "(N para Nacional y P para Particular): ";
		cin >> origen;
		if (origen !='n' and origen!='N' and origen!='p' and origen!='P') {
			cout << "El origen ingresado no es valido." << endl;
		}
	} while (origen!='n' and origen!='N' and origen!='p' and origen!='P');
	
	do {
		cout << "Ingrese el sexo al que esta dirigida la ropa comprada." << endl;
		cout << "(H para Hombres y M para Mujeres)" << endl;
		cin >> sexo;
		if (sexo!='h' and sexo!='H' and sexo!='m' and sexo!='M') {
			cout << "El sexo ingresado no es valido." << endl;
		}
	} while (sexo!='h' and sexo!='H' and sexo!='m' and sexo!='M');
	
	do {
		cout << "Ingrese la talla de la ropa comprada. (S/M/L): ";
		cin >> talla;
		if (talla!='s' and talla!='S' and talla!='m' and talla!='M' and talla!='l' and talla!='L') {
			cout << "La talla ingresada no es valida." << endl;
		}
	} while (talla!='s' and talla!='S' and talla!='m' and talla!='M' and talla!='l' and talla!='L');
	
	switch (origen) {
	case 'n':
		switch (sexo) {
		case 'h':
			switch (talla) {
			case 's': pdscto = 0.1;
				      break;
			case 'S': pdscto = 0.1;
					  break;
			case 'm': pdscto = 0.12;
				      break;
			case 'M': pdscto = 0.12;
			          break;
			case 'l': pdscto = 0.15;
				      break;
			case 'L': pdscto = 0.15;
					  break;
			} break;
		case 'H':
			switch (talla) {
			case 's': pdscto = 0.1;
				      break;
			case 'S': pdscto = 0.1;
					  break;
			case 'm': pdscto = 0.12;
				      break;
			case 'M': pdscto = 0.12;
			          break;
			case 'l': pdscto = 0.15;
				      break;
			case 'L': pdscto = 0.15;
					  break;
			} break;
		case 'm':
			switch (talla) {
			case 's': pdscto = 0.15;
				      break;
			case 'S': pdscto = 0.15;
					  break;
			case 'm': pdscto = 0.17;
				      break;
			case 'M': pdscto = 0.17;
			          break;
			case 'l': pdscto = 0.2;
				      break;
			case 'L': pdscto = 0.2;
					  break;
			} break;
		case 'M':
			switch (talla) {
			case 's': pdscto = 0.15;
				      break;
			case 'S': pdscto = 0.15;
					  break;
			case 'm': pdscto = 0.17;
				      break;
			case 'M': pdscto = 0.17;
			          break;
			case 'l': pdscto = 0.2;
				      break;
			case 'L': pdscto = 0.2;
					  break;
			} break;
		}
		break;
	case 'N':
		switch (sexo) {
		case 'h':
			switch (talla) {
			case 's': pdscto = 0.1;
				      break;
			case 'S': pdscto = 0.1;
					  break;
			case 'm': pdscto = 0.12;
				      break;
			case 'M': pdscto = 0.12;
			          break;
			case 'l': pdscto = 0.15;
				      break;
			case 'L': pdscto = 0.15;
					  break;
			} break;
		case 'H':
			switch (talla) {
			case 's': pdscto = 0.1;
				      break;
			case 'S': pdscto = 0.1;
					  break;
			case 'm': pdscto = 0.12;
				      break;
			case 'M': pdscto = 0.12;
			          break;
			case 'l': pdscto = 0.15;
				      break;
			case 'L': pdscto = 0.15;
					  break;
			} break;
		case 'm':
			switch (talla) {
			case 's': pdscto = 0.15;
				      break;
			case 'S': pdscto = 0.15;
					  break;
			case 'm': pdscto = 0.17;
				      break;
			case 'M': pdscto = 0.17;
			          break;
			case 'l': pdscto = 0.2;
				      break;
			case 'L': pdscto = 0.2;
					  break;
			} break;
		case 'M':
			switch (talla) {
			case 's': pdscto = 0.15;
				      break;
			case 'S': pdscto = 0.15;
					  break;
			case 'm': pdscto = 0.17;
				      break;
			case 'M': pdscto = 0.17;
			          break;
			case 'l': pdscto = 0.2;
				      break;
			case 'L': pdscto = 0.2;
					  break;
			} break;
		}
		break;
	case 'p':
		switch (sexo) {
		case 'h':
			switch (talla) {
			case 's': pdscto = 0.05;
				      break;
			case 'S': pdscto = 0.05;
					  break;
			case 'm': pdscto = 0.07;
				      break;
			case 'M': pdscto = 0.07;
			          break;
			case 'l': pdscto = 0.1;
				      break;
			case 'L': pdscto = 0.1;
					  break;
			} break;
		case 'H':
			switch (talla) {
			case 's': pdscto = 0.05;
				      break;
			case 'S': pdscto = 0.05;
					  break;
			case 'm': pdscto = 0.07;
				      break;
			case 'M': pdscto = 0.07;
			          break;
			case 'l': pdscto = 0.1;
				      break;
			case 'L': pdscto = 0.1;
					  break;
			} break;
		case 'm':
			switch (talla) {
			case 's': pdscto = 0.07;
				      break;
			case 'S': pdscto = 0.07;
					  break;
			case 'm': pdscto = 0.09;
				      break;
			case 'M': pdscto = 0.09;
			          break;
			case 'l': pdscto = 0.12;
				      break;
			case 'L': pdscto = 0.12;
					  break;
			} break;
		case 'M':
			switch (talla) {
			case 's': pdscto = 0.07;
				      break;
			case 'S': pdscto = 0.07;
					  break;
			case 'm': pdscto = 0.09;
				      break;
			case 'M': pdscto = 0.09;
			          break;
			case 'l': pdscto = 0.12;
				      break;
			case 'L': pdscto = 0.12;
					  break;
			} break;
		}
		break;
	case 'P':
		switch (sexo) {
		case 'h':
			switch (talla) {
			case 's': pdscto = 0.05;
				      break;
			case 'S': pdscto = 0.05;
					  break;
			case 'm': pdscto = 0.07;
				      break;
			case 'M': pdscto = 0.07;
			          break;
			case 'l': pdscto = 0.1;
				      break;
			case 'L': pdscto = 0.1;
					  break;
			} break;
		case 'H':
			switch (talla) {
			case 's': pdscto = 0.05;
				      break;
			case 'S': pdscto = 0.05;
					  break;
			case 'm': pdscto = 0.07;
				      break;
			case 'M': pdscto = 0.07;
			          break;
			case 'l': pdscto = 0.1;
				      break;
			case 'L': pdscto = 0.1;
					  break;
			} break;
		case 'm':
			switch (talla) {
			case 's': pdscto = 0.07;
				      break;
			case 'S': pdscto = 0.07;
					  break;
			case 'm': pdscto = 0.09;
				      break;
			case 'M': pdscto = 0.09;
			          break;
			case 'l': pdscto = 0.12;
				      break;
			case 'L': pdscto = 0.12;
					  break;
			} break;
		case 'M':
			switch (talla) {
			case 's': pdscto = 0.07;
				      break;
			case 'S': pdscto = 0.07;
					  break;
			case 'm': pdscto = 0.09;
				      break;
			case 'M': pdscto = 0.09;
			          break;
			case 'l': pdscto = 0.12;
				      break;
			case 'L': pdscto = 0.12;
					  break;
			} break;
		}
		break;
	}

	descuento = subtotal*pdscto;
	montofinal = subtotal-descuento;

	cout << "El subtotal es S/ " << fixed << setprecision(2) << subtotal << endl;
	cout << "El cliente es elegible para un descuento del " << pdscto*100 << "%" << endl;
	cout << "Equivalente a  S/ " << fixed << setprecision(2) << descuento << endl;
	cout << "Monto final:   S/ " << fixed << setprecision(2) << montofinal << endl;
	
	return 0;
}