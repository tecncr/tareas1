/* Estimada profesora, inclui esta solucion alternativa
   para que el usuario no tenga que ingresar la hora,
   no obstante parte de este codigo no es de mi autoria,
   lo escribi siguiendo tutoriales de YouTube.
*/

#include "iostream"
#include <time.h> // Libreria para obtener el tiempo del sistema

using namespace std;

int main(int argc, char * argv[]){

  int segundosPrevios=0;

  while(1)
  {

    int segundos, minutos, horas;
    string ampm;
  
    //Almacenando el total de segundos
    time_t total_segundos = time(0);
  
    //Obteniendo los valores de segundos, minutos y horas
    struct tm* ct = localtime(&total_segundos);
  
    segundos = ct->tm_sec;
    minutos = ct->tm_min;
    horas = ct->tm_hour;

    //Convertiendo a 12 horas AM/PM
   
    if (horas >= 12){
      ampm = "PM";
    } else {
      ampm = "AM";
    }

    horas = horas > 12 ? horas - 12 : horas;  

    //Imprimiendo el resultado
    if (segundos == segundosPrevios + 1 or (segundosPrevios == 59 and segundos == 0))
    {
      system("CLS");

      cout << "La hora es: \t\t\t\t"
      << (horas < 10 ? "0" : "") << horas <<":" << (minutos < 10 ? "0" : "") << minutos << ":"
      << (segundos < 10 ? "0" : "") << segundos << " " << ampm <<endl;

      cout << "La hora con un segundo adelantado es:   "
      << (horas < 10 ? "0" : "") << horas <<":" << (minutos < 10 ? "0" : "") << minutos << ":"
      << (segundos < 10 ? "0" : "") << segundos + 1 << " " << ampm <<endl;
    }
    
    segundosPrevios = segundos;
    
  }
  
  return 0;
}