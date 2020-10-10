Funcion num <- ingresar_validar(max, nombre_var)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de ",nombre_var,": "
		Leer num
		Si max <= num
			Escribir "El valor de ",nombre_var," tiene que ser menor que el de n (",max,")"
		FinSi
		Si num < 0
			Escribir "El valor de ",nombre_var," no puede ser negativo."
		FinSi
	Mientras Que max <= num o num < 0
Fin Funcion


Algoritmo SUMATORIA_SERIE
	
	Definir variables, n Como Entero
	Definir terminos, sumatoria Como Real
	Dimension variables[3]

	sumatoria <- 0
	
	Escribir "Programa que calcula el valor de la sumatoria: "
	Escribir "a/1 - a+b/2 + a+2b/3 - a+3b/4 + ... + a+nb/n+1"
	Escribir ""
	
	Repetir
		Escribir Sin Saltar "Ingrese el valor de n: "
		Leer variables[2]
		Si variables[2] < 0
			Escribir "Solo se admiten valores enteros positivos."
		FinSi
	Mientras Que variables[2] < 0
	
	Dimension terminos[variables[2]]
	
	variables[0] <- ingresar_validar(variables[2], "a")
	variables[1] <- ingresar_validar(variables[2], "b")
	
	Para n <- 0 Hasta variables[2]-1 Con Paso 1 Hacer
		terminos[n] <- (variables[0]+n*variables[1])/(n+1)
		Si n mod 2 > 0
			terminos[n] <- terminos[n] * (-1)
		FinSi
	Fin Para
	
	Escribir ""
	Escribir "Los terminos de la sucesion son: "
	Para n <- 0 Hasta variables[2]-1 Con Paso 1 Hacer
		Escribir terminos[n]
		sumatoria <- sumatoria + terminos[n]
	FinPara
	
	Escribir ""
	Escribir "La sumatoria de los ",variables[2]," primeros terminos de la serie es ",sumatoria
	Escribir ""
	
FinAlgoritmo
