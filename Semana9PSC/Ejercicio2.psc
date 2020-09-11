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
	
	Definir a, b, n, n_max Como Entero
	Definir termino, sumatoria Como Real
	
	sumatoria <- 0

	Escribir "Programa que calcula el valor de la sumatoria: "
	Escribir "a/1 - a+b/2 + a+2b/3 - a+3b/4 + ... + a+nb/n+1"
	Escribir ""
	
	Repetir
		Escribir Sin Saltar "Ingrese el valor de n: "
		Leer n_max
		Si n_max < 0
			Escribir "Solo se admiten valores enteros positivos."
		FinSi
	Mientras Que n_max < 0
	
	a <- ingresar_validar(n_max,"a")
	b <- ingresar_validar(n_max,"b")
	
	Para n <- 0 Hasta n_max Con Paso 1 Hacer
		termino <- (a+n*b)/(n+1)
		Si n mod 2 > 0
			termino <- termino * (-1)
		FinSi
		sumatoria <- sumatoria + termino
	Fin Para
	
	Escribir "La sumatoria de los ",n_max," primeros términos de la serie es ",sumatoria

FinAlgoritmo
