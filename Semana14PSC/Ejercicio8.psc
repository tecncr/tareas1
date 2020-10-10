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

Funcion rellenar_arreglo_entero_pcero(arreglo Por Referencia, tam)
	Definir i Como Entero
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Escribir Sin Saltar "Ingrese el elemento que ocupara la posicion ",i,": "
		Leer arreglo[i]
	Fin Para
FinFuncion

Algoritmo BUSCAR_ELEMENTO_EN_ARREGLO
	Definir arr, cont, n, num, i Como Entero
	TAM_MAX <- 100
	cont <- 0

	Escribir "Programa que busca un elemento dentro de un arreglo."
	
	n <- ingresar_validar_tam(TAM_MAX, "")
	Dimension arr[n]
	Escribir ""
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglo_entero_pcero(arr, n)
	
	Escribir ""
	Escribir Sin Saltar "Ingrese el numero que desee buscar en el arreglo: "
	Leer num
	
	Escribir ""
	Para i <- 0 Hasta n-1 Con Paso 1 Hacer
		Si arr[i] = num
			cont <- cont+1
			Escribir "Elemento ",num," encontrado en la posicion ",i
		FinSi
	FinPara
	Escribir ""
	
	Segun cont Hacer
		0: Escribir "El elemento ",num," no fue encontrado en el arreglo."
		1: Escribir "Se registro ",cont," aparicion del elemento ",num," en el arreglo."
		De Otro Modo:
			Escribir "Se registraron ",cont," apariciones del elemento ",num," en el arreglo."
	Fin Segun
FinAlgoritmo
