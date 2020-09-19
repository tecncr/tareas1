Funcion n <- ingresar_validar
	Definir n Como Entero
	Repetir
		Escribir "Ingrese el numero de filas: "
		Leer n
		Si n <= 0 Entonces
			Escribir ""
			Escribir "El numero ingresado no es valido."
			Escribir "Por favor ingrese numeros mayores o iguales que 1."
			Escribir ""
		FinSi
	Mientras Que n <= 0
FinFuncion


Funcion imprimir_triangulo(filas)
	Definir a, b Como Entero
	a <- 0 //Control de filas
	b <- 0 //Iterador de fila actual
	Para a <- filas Hasta 1 Con Paso -1 Hacer
		Para b <- 1 Hasta a Con Paso 1 Hacer
			Escribir Sin Saltar b, " "
		Fin Para
		Escribir "" //Salto de linea
	Fin Para
Fin Funcion


Algoritmo TRIANGULO_INVERTIDO_DE_NUMEROS
	
	Definir num Como Entero
	Escribir "Programa que muestra numeros en forma de triangulo invertido."
	num <- ingresar_validar
	Escribir ""
	imprimir_triangulo(num)
	Escribir "" //Salto de linea
	
FinAlgoritmo