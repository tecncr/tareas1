#include "iostream"
#include <math.h>
#include <conio.h>

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
    getch();
    return 0;
}