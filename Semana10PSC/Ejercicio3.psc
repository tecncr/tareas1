Funcion num <- ingresar_validar(nombre_var)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de ",nombre_var,": "
		Leer num
		Si num < 0
			Escribir "El valor de ",nombre_var," no puede ser negativo."
		FinSi
	Mientras Que num < 0
Fin Funcion


Algoritmo SUMATORIA_SERIE_E3
	
	Definir n, n_max, x, fact_n Como Entero
	Definir termino, sumatoria Como Real
	
	sumatoria <- 0
	
	Escribir "Programa que calcula el valor de la sumatoria: "
	Escribir "1 + x + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!"
	Escribir ""
	
	x <- ingresar_validar("x")
	n_max <- ingresar_validar("n (número de términos)")
	
	Para n <- 1 Hasta n_max Con Paso 1 Hacer
		termino <- (2*x^n)/(n+1)
		sumatoria <- sumatoria + termino
	FinPara
	
	Escribir ""
	Escribir "La sumatoria de la serie es: ",sumatoria
	
FinAlgoritmo
