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

Algoritmo CANTIDAD_DE_COINCIDENCIAS_EN_ARREGLO
	Definir arr, n1, num, coincidencias, i, j Como Entero
	TAM_MAX <- 100
	coincidencias <- 0
	
	Escribir "Programa que muestra la cantidad de veces que un elemento aparece"
	Escribir "dentro de un arreglo."
	Escribir ""
	
	n1 <- ingresar_validar_tam(TAM_MAX, "")
	Dimension arr[n1]
	Limpiar Pantalla
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglo(arr, n1)
	Limpiar Pantalla
	
	Escribir Sin Saltar "Ingrese el numero que desea buscar en el arreglo: "
	Leer num
	
	Para i <- 0 Hasta n1-1 Con Paso 1 Hacer
		Si arr[i] = num
			coincidencias <- coincidencias+1
		FinSi
	Fin Para
	
	Escribir ""
	Escribir "El numero ",num," aparece ",coincidencias," veces en el arreglo."
FinAlgoritmo