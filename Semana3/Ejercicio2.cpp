#include "iostream"
#include <math.h>
#include <conio.h>
using namespace std;

int main(){

    int figura;
    double area, perimetro;

    cout << "Bienvenido a la calculadora de areas y perimetros. Por favor elija la figura del siguiente menu:" << endl;
    cout << "Escriba 1 para seleccionar el cuadrado." << endl;
    cout << "Escriba 2 para seleccionar el rombo." << endl;
    cout << "Escriba 3 para seleccionar el trapecio." << endl;
    cout << "Escriba 4 para seleccionar el paralelepipedo." << endl;
    cout << "Su opcion: ";
    cin >> figura;
    
    switch (figura)
    {
    
    case 1:
        double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = pow(lado,2);
            perimetro = 4 * lado;
            cout << "El cuadrado tiene un area de "<< area <<" unidades cuadradas y un perimetro de " << perimetro <<" unidades";
        break;
   
    case 2:
        double dMayor, dMenor;
        cout << "Ha elegido trabajar con un rombo." << endl;
        cout << "Ingrese la medida de la diagonal mayor: ";
        cin >> dMayor;
        cout << "Ingrese la medida de la diagonal menor: ";
        cin >> dMenor;
        area = (dMayor*dMenor)/2;
        perimetro = 4 * (sqrt(pow(dMayor,2) + pow(dMenor,2)) / 2);
        cout << "El rombo tiene un area de " << area << " unidades cuadradas y un perimetro de " << perimetro << " unidades.";
        break;

    case 3:
        double bMenor, bMayor, l1, l2, difBases;
        cout << "Ha elegido trabajar con un trapecio." << endl;
        cout << "Inserte la medida de la base mayor: ";
        cin >> bMayor;
        cout <<  "Inserte la medida de la base menor: ";
        cin >> bMenor;
        cout <<  "Inserte la medida del lado menor: ";
        cin >> l1;
        cout << "Inserte la medida del lado mayor: ";
        cin >> l2;
            while (l1 > l2)
            {
                cout << "El lado menor ingresado es mas grande que el lado mayor. Por favor ingreselos en orden correcto." << endl;
                cout << "Ingrese el lado menor: ";
                cin >> l1;
                cout << "Ingrese el lado mayor: ";
                cin >> l2;
            }
            difBases = abs(bMayor - bMenor);
            area = abs(bMayor+bMenor)/2 * sqrt(pow(l2,2) - pow(((pow(l2,2) - pow(l1,2)) + pow(difBases,2)) /(2 * difBases),2));
            perimetro = bMayor + bMenor + l1 + l2;
            cout << "El area del trapecio es " << area << " unidades cuadradas, y el perimetro mide " << perimetro << " unidades.";
        break;
    
    case 4:
        double largo, ancho, altura;
        cout << "Ha elegido trabajar con el paralelepipedo." << endl;
        cout << "Ingrese el largo: ";
        cin >> largo;
        cout << "Ingrese el ancho: ";
        cin >> ancho;
        cout << "Ingrese la altura: ";
        cin >> altura;
        area = 2 * (largo * ancho) + 4 * (largo * altura);
        perimetro = 4 * (largo + ancho + altura);
        cout << "El area total del paralelepipedo es: " << area << " unidades cuadradas, y el perimetro mide: " << perimetro << " unidades.";
        break;

    default:
        cout << "La opcion ingresada es invalida.";
        break;
    }

    getch();
    return 0;
}