#include "iostream"
#include <iomanip> //para poder redondear
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){
    double galonesDespachados, precioGasolina, cobrarACliente, litrosDespachados;

	cout << "Programa que calcula lo que se le debe cobrar al cliente por la gasolina." << endl;
	cout << "Ingrese los galones despachados: ";
	cin >> galonesDespachados;
	cout << "Ingrese el precio por litro: ";
	cin >> precioGasolina;
	litrosDespachados = galonesDespachados/0.2642;
	cobrarACliente = precioGasolina * litrosDespachados;
	cout << "El monto de lo despachado al cliente es: S/ " << fixed << setprecision(2) << cobrarACliente << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}