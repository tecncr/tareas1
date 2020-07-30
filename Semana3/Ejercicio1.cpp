#include "iostream"
#include <math.h>
//#include <conio.h> (Descomentar en Windows)

using namespace std;
int main(int argc, char * argv[]){

    double sexagesimal, radianes, radianesEnPi;

    cout << "Programa para convertir grados sexagesimales a radianes." << endl;
    cout << "Ingrese los grados sexagesimales: ";
    cin >> sexagesimal;

    radianes = (sexagesimal * (M_PI/180));
    radianesEnPi = radianes/M_PI;
    
    cout << sexagesimal << " grados sexagesimales es igual a " << radianes << " radianes." <<endl;
    cout << "O tambien " << radianesEnPi << "pi radianes." << endl;
    
//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}