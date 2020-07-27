#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char* argv[]){
    double calificacion1, calificacion2, calificacion3, promedio; //double para que se permitan las notas decimales
    cout << "Programa para calcular el promedio de 3 calificaciones."<<endl;
    cout << "Ingrese la primera calificacion: ";
    cin >> calificacion1;
    cout << "Ingrese la segunda calificacion: ";
    cin >> calificacion2;
    cout << "Ingrese la tercera calificacion: ";
    cin >> calificacion3;
    promedio = (calificacion1+calificacion2+calificacion3)/3;
    cout << "El promedio de las calificaciones ingresadas es: " << promedio;
    getch();
    return 0;
}