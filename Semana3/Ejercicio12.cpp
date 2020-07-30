#include "iostream"
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){
    double horasTrabajadas, pagoParcial, descuentoAFP, pagoFinal;
	cout << "Programa para calcular el salario final semanal de un trabajador." << endl;
	cout << "Ingrese la cantidad de horas trabajadas: ";
	cin >> horasTrabajadas;

	pagoParcial = (35 * horasTrabajadas);
	descuentoAFP = pagoParcial * 0.05;
	pagoFinal = pagoParcial - descuentoAFP;

	cout << "Su salario final será de S/ " << pagoFinal;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}
