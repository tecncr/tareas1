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


Algoritmo SUMATORIA_SERIE_E
	
	Definir n, n_max, x, fact_n Como Entero
	Definir termino, sumatoria Como Real
	
	Escribir "Programa que calcula el valor de la sumatoria de la serie: "
	Escribir "1 + x + 2!/x^2 + 3!/x^3 + 4!/x^4 + ... + n!/x^n"
	Escribir ""
	
	x <- ingresar_validar(10000000000, "x")
	
	sumatoria <- 1+x //Iniciada en 1+x por los primeros terminos
	
	n_max <- ingresar_validar(13, "n (numero de terminos)")
	//n limitada a 12 para evitar desbordamiento del factorial en PSeInt
	
	Para n <- 2 Hasta n_max Con Paso 1 Hacer
		termino <- factorial(n)/(x^n)
		sumatoria <- sumatoria + termino
	FinPara
	
	Escribir ""
	Escribir "La sumatoria de la serie es: ",sumatoria
	
FinAlgoritmo