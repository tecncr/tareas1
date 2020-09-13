Funcion num <- ingresar_validar(nombre_var)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese l",nombre_var,": "
		Leer num
		Si num < 0
			Escribir "L",nombre_var," no puede ser negativa."
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que num < 0
Fin Funcion


Funcion imprimir_serie(num)
    Definir denom, a, np_linea Como Entero
	np_linea <- 0
    Para a<-1 Hasta num Con Paso 1
        denom<-(a*(a+1)/2)*4
        Escribir Sin Saltar "1/", denom ","
		//Salto de linea cada 8 terminos para visualizacion correcta
		np_linea <- np_linea + 1
		Si np_linea = 8
			Escribir ""
			np_linea <- 0
		FinSi
    FinPara
	Escribir Sin Saltar " fin de la serie."
	Escribir ""
FinFuncion


Algoritmo SERIE
	
    Definir n Como Entero
	
	Escribir "Programa que imprime términos de la serie 1/4, 1/12, 1/24, 1/40, 1/60, ..."
    n <- ingresar_validar("a cantidad de términos que desee imprimir")
	
    Escribir "Los términos de la serie son: "
    imprimir_serie(n)
	
FinAlgoritmo