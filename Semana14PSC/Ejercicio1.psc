Funcion n <- ingresar_validar_tam(t_max)
	Definir n Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese la cantidad de elementos del arreglo: "
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

Funcion el_mayor <- encontrar_mayor(arreglo Por Referencia, tam)
	Definir i Como Entero
	Definir el_mayor Como Caracter
	el_mayor <- arreglo[0]
	Para i<-0 Hasta tam-2 Con Paso 1 Hacer
		Si arreglo[i+1] > arreglo[i]
			el_mayor <- arreglo[i+1]
		FinSi
	FinPara
FinFuncion

Funcion el_menor <- encontrar_menor(arreglo Por Referencia, tam)
	Definir i Como Entero
	Definir el_menor Como Caracter
	el_menor <- arreglo[0]
	Para i<-0 Hasta tam-2 Con Paso 1 Hacer
		Si arreglo[i+1] < arreglo[i]
			el_menor <- arreglo[i+1]
		FinSi
	FinPara
FinFuncion

Algoritmo MAYOR_MENOR_ARREGLO_CARACTERES
	TAM_MAX <- 100
	Definir cant Como Entero
	Definir arr Como Caracter
	
	Escribir "Programa que muestra el mayor y menor elemento de un arreglo de caracteres"
	cant <- ingresar_validar_tam(TAM_MAX)
	Dimension arr[cant]
	rellenar_arreglo(arr, cant)
	
	Escribir "El mayor elemento del arreglo es: ",encontrar_mayor(arr, cant)
	Escribir "El menor elemento del arreglo es: ",encontrar_menor(arr, cant)
FinAlgoritmo
