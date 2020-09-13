Funcion num <- ingresar_validar(nombre_var, max_string, max)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de ",nombre_var,": "
		Leer num
		Si max <= num
			Escribir "El valor de ",nombre_var," tiene que ser menor que ",max_string,max
			Si nombre_var == "N"
				Escribir "Esto es debido a una limitacion de PSeInt."
			FinSi
			Escribir "Inténtelo nuevamente."
		FinSi
		Si num < 0
			Escribir "El valor de ",nombre_var," no puede ser negativo."
			Escribir "Inténtelo nuevamente."
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


Algoritmo SUMATORIA_SERIE
	
	Definir a, b, n, n_max Como Entero
	Definir termino, sumatoria Como Real
	
	sumatoria <- 0
	
	Escribir "Programa que calcula el valor de la sumatoria: "
	Escribir "a/1 - a+b/2 + a+2b/3 - a+3b/4 + ... + a+nb/n+1"
	Escribir ""
	
	//n limitada a 11 para evitar desbordamiento (problema de PSeInt)
	n_max <- ingresar_validar("N", "", 12)
	
	a <- ingresar_validar("A", "el de N: ", n_max)
	b <- ingresar_validar("B", "el de N: ", n_max)
	
	Para n <- 0 Hasta n_max Con Paso 1 Hacer
		termino <- factorial(n+1)/(a+n*b)
		Si n mod 2 > 0
			termino <- termino * (-1)
		FinSi
		sumatoria <- sumatoria + termino
	Fin Para
	
	Escribir ""
	Escribir "La sumatoria de los ",n_max," primeros términos de la serie es ",sumatoria
	
FinAlgoritmo