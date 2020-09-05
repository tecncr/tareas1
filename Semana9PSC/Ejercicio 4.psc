//Subproceso para validar numeros
Funcion numero_ingresado <- ingresar_validar (orden)
	Definir numero_ingresado Como Entero
	Repetir
		Escribir "Ingrese el ",orden," número."
		Leer numero_ingresado
		Si numero_ingresado < 1 Entonces
			Escribir "El numero ingresado no es válido. Por favor ingrese"
			Escribir "un numero igual o superior a 1."
		FinSi
	Mientras Que numero_ingresado < 1
Fin Funcion


Algoritmo MCM
	Definir a, b, c, max, mid, min, div, mcm_acum Como Entero
	mcm_acum <- 1
	Escribir "Programa que calcula el MCM de tres números."
	a <- ingresar_validar("primer")
	b <- ingresar_validar("segundo")
	c <- ingresar_validar("tercer")
	
//Condicionales que ordenan los numeros de menor a mayor en variables
	Si a <= b y a <= c y b <= c Entonces
		min <- a
		mid <- b
		max <- c
	SiNo
		Si a <= b y a <= c y c <= b Entonces
			min <- a
			mid <- c
			max <- b
		SiNo
			Si b <= a y b <= c y a <= c Entonces
				min <- b
				mid <- a
				max <- c
			SiNo
				Si b <= a y b <= c y c <= a Entonces
					min <- b
					mid <- c
					max <- a
				SiNo
					Si c <= a y c <= b y a <= b Entonces
						min <- c
						mid <- a
						max <- b
					SiNo
						Si c <= a y c <= b y b <= a Entonces
							min <- c
							mid <- b
							max <- a
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	Repetir
		Para div<-2 Hasta max Con Paso 1 Hacer
			Repetir
				Si min mod div = 0 o mid mod div = 0 o max mod div = 0 Entonces
					mcm_acum <- mcm_acum * div
				FinSi
				Si min mod div = 0 Entonces
					min <- min/div
				FinSi
				Si mid mod div = 0 Entonces
					mid <- mid/div
				FinSi
				Si max mod div = 0 Entonces
					max <- max/div
				FinSi
			Mientras Que min mod div = 0 o mid mod div = 0 o max mod div = 0
		Fin Para
	Mientras Que min<>1 y mid<>1 y max<>1
	
	Escribir "El MCM de ",a,", ",b," y ",c," es: ",mcm_acum
	
FinAlgoritmo