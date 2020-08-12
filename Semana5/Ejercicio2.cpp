#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	double entrada1, entrada2;
	string operador; //Declarado como cadena para evitar errores de entrada del usuario

	cout << "Programa que calcula el resultado de una operacion entre dos numeros." << endl;
	cout << "Ingrese el primer numero: ";
	cin >> entrada1;
	cout << "Ingrese el segundo numero: ";
	cin >> entrada2;
	cout << "Ingrese el operador de la operacion a realizar con los numeros ingresados: ";
	cin >> operador;

	while (operador != "+" && operador != "-" && operador != "*" && operador != "/") {
		cout << "El operador ingresado no es valido." << endl;
		cout << "Por favor ingrese el operador de la operacion a realizar: ";
		cin >> operador;
	}
	
	if (operador == "+") {
		cout << "El resultado de la suma es: " << entrada1+entrada2 << endl;
	}
	if (operador == "-") {
		cout << "El resultado de la resta es: " << entrada1-entrada2 << endl;
	}
	if (operador == "*") {
		cout << "El resultado de la multiplicacion es: " << entrada1*entrada2 << endl;
	}
	if (operador == "/") {
		cout << "El resultado de la division es: " << entrada1/entrada2 << endl;
	}

	return 0;

}