#include "iostream"
using namespace std;

int main(int argc, char* argv[]){
    int age, currentMonth, currentDay, daysFromYears, daysFromMonths, totalDays;
	
	cout << "Programa para calcular los dias aproximados que una persona lleva viva." << endl;
	cout << "Ingrese su edad: ";
	cin >> age;
	
	while (!(age < 0 && age > 200))
	{
		cout << "Su edad está fuera de rango. Por favor ingrese una edad valida: ";
		cin >> age;
	}
	
	cout <<  "Ingrese el numero del mes actual: ";
	cin >> currentMonth;
	
    while (!(1 <= currentMonth && currentMonth <= 12)){
        cout << "El mes ingresado es invalido, por favor ingrese un mes valido (entre 1 y 12): ";
		cin >> currentMonth;
    }
	
	cout << "Ingrese el dia del mes actual: ";
	cin >> currentDay;
	
	while (!(1 <= currentDay && currentDay <= 31))
	{
		cout << "El dia ingresado es invalido, por favor ingrese un dia valido (entre 1 y 31): ";
		cin >> currentDay;
	}
	
	daysFromYears = 365 * age;
	daysFromMonths = currentDay + (currentMonth * 30);
	totalDays = daysFromYears + daysFromMonths;

	cout << "Usted ha vivido "<< totalDays << " días aproximadamente." << endl;

    return 0;
}