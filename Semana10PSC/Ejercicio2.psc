Funcion num <- ingresar_validar(max, nombre_var)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de ",nombre_var,": "
		Leer num
		Si max <= num
			Escribir "El valor de ",nombre_var," tiene que ser menor que ",max
		FinSi
		Si num < 0
			Escribir "El valor de ",nombre_var," no puede ser negativo."
		FinSi
	Mientras Que max <= num o num < 0
Fin Funcion


Funcion fact <- factorial(num Por Valor)
	Definir fact, i Como Entero
	fact <- 1
	Para i <- 1 Hasta num Con Paso 1 Hacer
		fact <- fact * i
	Fin Para
FinFuncion


Algoritmo SUMATORIA_SERIE_E2
	
	Definir n, n_max, x, fact_n Como Entero
	Definir termino, sumatoria Como Real
	
	sumatoria <- 1 //Se inicia en 1 porque el primer termino siempre es 1
	
	Escribir "Programa que calcula el valor de la sumatoria: "
	Escribir "1 + x + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!"
	Escribir ""
	
	x <- ingresar_validar(10000000000, "x")
	//n limitada a 12 para evitar desbordamiento en el factorial
	n_max <- ingresar_validar(13, "n (número de términos)")
	
	Para n <- 1 Hasta n_max Con Paso 1 Hacer
		termino <- (x^n)/factorial(n)
		sumatoria <- sumatoria + termino
	FinPara
	
	Escribir ""
	Escribir "La sumatoria de la serie es: ",sumatoria
	
FinAlgoritmo
