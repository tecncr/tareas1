Funcion num <- ingresar_validar_positivo(var_name)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de ",var_name,": "
		Leer num
		Si num < 0
			Escribir "El valor de ",var_name," no puede ser negativo."
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que num < 0
FinFuncion


Funcion inverso <- obtener_inverso (num)
	Definir a, inverso, res Como Entero
	a <- num
	inverso <- 0
	Mientras a > 0
		res <- a%10
		inverso <- inverso*10 + res
		a <- trunc(a/10)
	FinMientras
Fin Funcion


Algoritmo CAPICÚAS_RANGO
	
	Definir a, b, n, np_linea Como Entero
	
	np_linea <- 0
	
	Escribir "Programa que muestra los números capicúas entre a y b."
	
	a <- ingresar_validar_positivo("a")
	b <- ingresar_validar_positivo("b")
	
	Escribir "Los números capicúas entre ",a," y ",b," son:"
	Para n <- a Hasta b Con Paso 1 Hacer
		Si n = obtener_inverso(n)
			Escribir Sin Saltar n,", "
			//Insertando salto de linea cada 8 números
			//para una correcta visualización
			np_linea <- np_linea + 1
			Si np_linea = 8
				Escribir ""
				np_linea <- 0
			FinSi
		FinSi
	FinPara
	Escribir "fin de los resultados."
	
FinAlgoritmo
