Algoritmo SERIE
	
	Definir n, i, a Como Entero
	Definir x, resultado_acum, factorial2n Como Real
	
	factorial2n <- 1
	resultado_acum <- 0
	
	Escribir "Programa que calcula los n terminos de la serie x/2! + 2x²/4! + 3x³/6 + .,. + Nx^N/2N!"
	Escribir "Ingrese el valor de X: "
	Leer x
	Escribir "Ingrese el valor de N: "
	Leer n
	
	Para i<-1 Hasta n Con Paso 1 Hacer 
		Para a<-1 Hasta 2*n Con Paso 1 Hacer
			factorial2n <- factorial2n*a
		Fin Para
		resultado_acum <- resultado_acum + (n*x^n)/factorial2n
	Fin Para
	
	Escribir "La suma de los ",n," términos de la serie es ",resultado_acum
	
FinAlgoritmo