Funcion num <- ingresar_validar(nombre_var)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de ",nombre_var,": "
		Leer num
		Si num < 1
			Escribir "El valor de ",nombre_var," no puede ser menor que 1."
		FinSi
	Mientras Que num < 1
Fin Funcion


Funcion fact <- factorial(num Por Valor)
	Definir fact, i Como Entero
	fact <- 1
	Para i <- 1 Hasta num Con Paso 1 Hacer
		fact <- fact * i
	Fin Para
FinFuncion


Algoritmo SUMATORIA_SERIE
	
	Definir n, x, i, pos_terminos Como Entero
	Definir terminos, sumatoria Como Real
	
	sumatoria <- 0
	pos_terminos <- 0
	
	Escribir "Programa que calcula el valor de la sumatoria: "
	Escribir "x^n/n! + x^(n-1)/(n-1)! + x^(n-2)/(n-2)! + ... + x^1/1!"
	Escribir ""
	
	n <- ingresar_validar("n")
	x <- ingresar_validar("x")
	
	Dimension terminos[n]
	
	Para i <- n Hasta 1 Con Paso -1 Hacer
		terminos[pos_terminos] <- (x^i)/factorial(i)
		pos_terminos <- pos_terminos+1
	Fin Para
	
	Escribir ""
	Escribir "Los terminos de la sucesion son: "
	Para i <- 0 Hasta n-1 Con Paso 1 Hacer
		Escribir "Termino que ocupa la posicion [",i,"]: ",terminos[i]
		sumatoria <- sumatoria + terminos[i]
	FinPara
	
	Escribir ""
	Escribir "La sumatoria de los terminos de la serie es ",sumatoria
	Escribir ""
	
FinAlgoritmo