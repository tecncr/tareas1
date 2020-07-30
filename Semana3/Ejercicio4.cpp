#include "iostream"
// #include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){
    double base, altura, perimetro, superficie;
	cout << "Programa que calcula el perímetro y la superficie de un rectangulo." << endl;
	cout << "Ingrese la longitud de la base: ";
	cin >> base;
	cout << "Ingrese el valor de la altura: ";
	cin >> altura;
	superficie = base * altura;
	perimetro = (base + altura) * 2;
	cout << "La superficie mide " << superficie << " unidades cuadradas y el perimetro mide " << perimetro <<" unidades.";
    return 0;
}