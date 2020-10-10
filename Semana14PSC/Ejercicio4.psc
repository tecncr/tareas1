Funcion n <- ingresar_validar_tam(t_max, nombre_arr)
	Definir n Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese la cantidad de elementos del arreglo",nombre_arr,": "
		Leer n
		Si n < 1
			Escribir "El arreglo no puede tener menos de 1 elemento"
		FinSi
		Si n > t_max
			Escribir "Para evitar desbordamiento se ha limitado la cantidad maxima de elementos a ",t_max
			Escribir "Por favor ingrese una cantidad inferior o igual a ",t_max
		FinSi
	Mientras Que  n < 1 o n > t_max
FinFuncion

Funcion rellenar_arreglo(arreglo Por Referencia, tam)
	Definir i Como Entero
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Escribir Sin Saltar "Ingrese el elemento ",i+1," de ",tam,": "
		Leer arreglo[i]
	Fin Para
FinFuncion

Funcion el_mayor <- encontrar_mayor_entero(arreglo Por Referencia, tam)
	Definir i, el_mayor Como Entero
	el_mayor <- arreglo[0]
	Para i<-0 Hasta tam-2 Con Paso 1 Hacer
		Si arreglo[i+1] > arreglo[i]
			el_mayor <- arreglo[i+1]
		FinSi
	FinPara
FinFuncion

Algoritmo MODA_DE_UN_ARREGLO
	Definir n1, frecuencia, arr_frec, pos_arr_f, i, mayor_cant_frec, coincidencias Como Entero
	Definir arr, moda Como Caracter
	TAM_MAX <- 100
	pos_arr_f <- 0
	
	Escribir "Programa que muestra la moda de un arreglo de enteros."
	Escribir ""
	
	n1 <- ingresar_validar_tam(TAM_MAX, "")
	Dimension arr[n1], arr_frec[n1]
	Limpiar Pantalla
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglo(arr, n1)
	
	Para i <- 0 Hasta n1-1 Con Paso 1 Hacer
		coincidencias <- 0
		Para j <- 0 Hasta n1-1 Con Paso 1 Hacer
			Si arr[i] = arr[j]
				coincidencias <- coincidencias+1
			FinSi
		FinPara
		arr_frec[pos_arr_f] <- coincidencias
		pos_arr_f <- pos_arr_f+1
	Fin Para
	
	mayor_cant_frec <- encontrar_mayor_entero(arr_frec, pos_arr_f)
	
	Para i <- 0 Hasta pos_arr_f-1 Con Paso 1 Hacer
		Si arr_frec[i] = mayor_cant_frec
			moda <- arr[i]
		FinSi
	Fin Para
	
	Escribir ""
	Escribir "La moda de este arreglo es ",moda
FinAlgoritmo