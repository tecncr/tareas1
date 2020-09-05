#include "iostream"

using namespace std;
int main() {
	int a, b, cmd, denominador, n1, n2, numerador;
	cout << "\tSimplifiquemos una fraccion  " << endl;
	cout << "Ingrese el numerador:  " << endl;
	cin >> a;
	cout << "Ingrese el denominador: " << endl;
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
	numerador = a/n1;
	denominador = b/n1;
	cout << "Al simpliflicar la fraccion " << a << " / " << b << " queda: " << numerador << "/" << denominador << endl;
	return 0;
}

