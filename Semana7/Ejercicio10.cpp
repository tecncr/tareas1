#include "iostream"
#include <iomanip>
using namespace std;

int main(int argc, char * argv[]){

	double montobase, monto_masimpuestos, nuevomonto, p_interes, p_inicial;
	double impuestos, intereses, inicial, cadaletra;
	int tipofin, num_letras;

	cout << "Programa que calcula los montos a pagar de una compra financiada." << endl;
	cout << "Ingrese el monto de la compra: S/ ";
	cin >> montobase;
	
	do {
		cout << "Ingrese el tipo de financiamiento (1/2/3): ";
		cin >> tipofin;
		if (tipofin != 1 and tipofin != 2 and tipofin !=3 ) {
			cout << "El tipo de financiamiento ingresado no es valido." << endl;
			cout << "Se admiten solo los valores: 1, 2, 3." << endl;
		}
	} while (tipofin != 1 and tipofin != 2 and tipofin !=3 );
	
	switch (tipofin) {
	case 1:
		p_interes = 0.05;
		p_inicial = 0.6;
		num_letras = 2;
		break;
	case 2:
		p_interes = 0.1;
		p_inicial = 0.5;
		num_letras = 4;
		break;
	case 3:
		p_interes = 0.15;
		p_inicial = 0.35;
		num_letras = 6;
		break;
	}

	impuestos = montobase * 0.1;
	monto_masimpuestos = montobase + impuestos;
	intereses = monto_masimpuestos * p_interes;
	nuevomonto = monto_masimpuestos + intereses;
	inicial = nuevomonto * p_inicial;
	cadaletra = (nuevomonto - inicial)/num_letras;

	cout << endl << "*********** INFORMACION SOBRE LA COMPRA FINANCIADA ***********" << endl;
	cout << fixed << setprecision(2);
	cout << "El monto base de la compra es:                    S/ " << montobase << endl;
	cout << "Esta sujeto a impuestos del 10% que equivalen a   S/ " << impuestos << endl;
	cout << "El monto de la factura tras impuestos es:         S/ " << monto_masimpuestos << endl;
	cout << "La tasa de interes para este financiamiento es del   " << p_interes * 100 << "%" << endl;
	cout << "Los intereses totales son equivalentes a          S/ " << intereses << endl;
	cout << "El monto de la factura tras intereses es:         S/ " << nuevomonto << endl;
	cout << "La cuota inicial es del " << p_inicial * 100 << "%" << endl;
	cout << "El monto de la cuota inicial es                   S/ " << inicial << endl;
	cout << "Esta compra sera pagada en " << num_letras << " letras de            S/ " << cadaletra << endl << endl;
	
	return 0;
}