#include "iostream"
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){	
    int days;
	double hoursAday, totalCost, USDcost, PENcost;

	cout << "Calculadora de costo total de la asesoria." << endl;
	cout << "Ingrese el numero de dias de asesoria brindada: ";
	cin >> days;
	cout << "Ingrese el numero de horas por dia: ";
	cin >> hoursAday;
	while (hoursAday > 24)
    {
		cout << "La cantidad de horas diarias no puede exceder la duracion de un dia." << endl;
		cout << "Ingrese el numero de horas por dia: ";
		cin >> hoursAday;
    }

	USDcost = days * hoursAday * 25;
	PENcost = USDcost * 3.52; // Tipo de cambio del 28 de julio del 2020
	cout << "El costo total de la asesoria es S/ " << PENcost << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}