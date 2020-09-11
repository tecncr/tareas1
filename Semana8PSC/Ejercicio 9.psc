Algoritmo TRIANGULO_DE_NUMEROS
	
	Definir a, b, num Como Entero
	
	a <- 0
	b <- 0
	
	Escribir "Programa que muestra numeros en forma de triangulo."
	Escribir "Ingrese el numero de filas: "
	Leer num
	
	Escribir "" //Salto de linea

	Para a <- 1 Hasta num Con Paso 1 Hacer
		Para b <- 1 Hasta a Con Paso 1 Hacer
			Escribir Sin Saltar b
		Fin Para
		Escribir "" //Salto de linea
	Fin Para
	
	FinAlgoritmo