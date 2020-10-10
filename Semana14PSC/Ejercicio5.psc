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

Funcion ordenar_arreglo_burbuja(arreglo Por Referencia, tam)
	Definir i, temp Como Entero
	Para i<-1 Hasta tam-1 Con Paso 1 Hacer
		Para j<-0 Hasta tam-2 Con Paso 1 Hacer
			Si arreglo[j] > arreglo[j+1]
				temp <- arreglo[j]
				arreglo[j] <- arreglo[j+1]
				arreglo[j+1] <- temp
			FinSi
		FinPara
	FinPara
FinFuncion

Algoritmo MEDIANA_DE_UN_ARREGLO
	Definir arr, n1 Como Entero
	Definir mediana Como Real
	TAM_MAX <- 100

	Escribir "Programa que muestra la mediana de un arreglo de enteros."
	Escribir ""
	
	n1 <- ingresar_validar_tam(TAM_MAX, "")
	Dimension arr[n1]
	Limpiar Pantalla
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglo(arr, n1)
	
	ordenar_arreglo_burbuja(arr, n1)
	
	Si n1%2 = 0
		mediana <- (arr[(n1/2)-1]+arr[n1/2])/2
	SiNo
		mediana <- arr[((n1+1)/2)-1]
	FinSi
	
	Escribir ""
	Escribir "La mediana del arreglo ingresado es: ",mediana
FinAlgoritmo