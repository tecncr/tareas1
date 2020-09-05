#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	int a;
	int b;
	int den;
	int n1;
	int n2;
	int num;
	cout << "Programa que simplifica una fracci�n." << endl;
	cout << "Ingrese el numerador:" << endl;
	cin >> a;
	cout << "Ingrese el denominador:" << endl;
	cin >> b;
	n1 = a;
	n2 = b;
	while (n1!=n2) {
		if (n1>n2) {
			n1 = n1-n2;
		} else {
			n2 = n2-n1;
		}
	}
	num = a/n1;
	den = b/n1;
	if (den==1) {
		cout << "La fracci�n " << a << "/" << b << " simplificada queda como: " << num << endl;
	} else {
		cout << "La fracci�n " << a << "/" << b << " simplificada queda como: " << num << "/" << den << endl;
	}
	return 0;
}

