Algoritmo distanciaEntreDosPuntos
	Definir x1, y1, x2, y2, distancia, distanciaCuadrado como Real
	Escribir "Programa que calcula la distancia entre dos puntos en R2."
	Escribir "Ingrese la coordenada x del primer punto (x1): "
	Leer x1
	Escribir "Ingrese la coordenada y del primer punto (y1): "
	Leer y1
	Escribir "Ingrese la coordenada x del segundo punto (x2): "
	Leer x2
	Escribir "Ingrese la coordenada y del segundo punto (y2): "
	Leer y2
	distanciaCuadrado <- (x2-x1)^2 + (y2-y1)^2
	distancia <- rc(distanciaCuadrado)
	Escribir "La distancia entre (",x1,",",y1,") y (",x2,",",y2,") es igual a la raíz cuadrada de ",distanciaCuadrado
	Escribir "Lo cual es igual a: ",distancia
FinAlgoritmo