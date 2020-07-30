#include "iostream"
// #include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char * argv[]){

    double cantidad, precioUnitario, efectivo, vuelto;

    cout << "Registro de venta."<<endl;
 	cout << "Ingrese el precio unitario del producto que se esta vendiendo: S/ ";
	cin >> precioUnitario;
	cout << "Ingrese la cantidad de unidades de dicho producto: ";
	cin >> cantidad;
	cout << "Ingrese la cantidad de efectivo dado por el cliente: S/";
	cin >> efectivo;
	vuelto = efectivo - (cantidad * precioUnitario);

    if (vuelto < 0){
        cout << "El efectivo dado por el cliente es insuficiente.";
    }
    else{
        cout << "El vuelto a entregar al cliente es: S/ " << vuelto;
    }

    getch();
    return 0;
}