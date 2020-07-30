#include "iostream"
//#include <conio.h> (Windows)
using namespace std;

int main(int argc, char* argv[]){

    double pUnit, cant, igv, mParcial, mTotal;

    cout <<  "Programa que calcula el monto parcial y total de la compra de un producto." << endl;
    cout << "Ingrese el precio unitario del producto: ";
    cin >> pUnit;

    cout << "Ingrese la cantidad de unidades del producto que se venderá: ";
    cin >> cant;

    mParcial = pUnit * cant;
    igv = 0.19 * mParcial;
    mTotal = mParcial + igv;

    cout << "El monto parcial de la compra es: S/ " << mParcial << endl;
    cout << "El IGV es: S/ " << igv << endl;
	cout << "El monto total de la compra es: S/ " << mTotal << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}