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

Algoritmo ELIMINAR_ELEMENTO_DE_ARREGLO
	Definir n, i, pos_arrf, eliminaciones Como Entero
	Definir arr, arr_final, elem Como Caracter
	TAM_MAX <- 100
	eliminaciones <- 0
	pos_arrf <- 0
	
	Escribir "Programa que elimina un elemento dado en un arreglo."
	
	n <- ingresar_validar_tam(TAM_MAX, "")
	Dimension arr[n], arr_final[n]
	Escribir ""
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglo(arr, n)
	
	Escribir Sin Saltar "Ingrese el elemento que desee eliminar del arreglo: "
	Leer elem
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Si arr[i] <> elem
			arr_final[pos_arrf] <- arr[i]
			pos_arrf <- pos_arrf+1
		SiNo
			eliminaciones <- eliminaciones+1
		FinSi
	FinPara
	
	Escribir ""
	
	Si eliminaciones = 0
		Escribir "El valor ",elem," no fue encontrado en el arreglo."
		Escribir "Ningun dato fue eliminado. El arreglo se mantiene igual."
	SiNo
		Escribir "Se eliminaron ",eliminaciones, " coincidencias de ",elem," en el arreglo."
		Escribir "El arreglo actual contiene los siguientes elementos: "
		Para i<-0 Hasta pos_arrf-1 Con Paso 1 Hacer
			Escribir arr_final[i]
		FinPara
	FinSi
FinAlgoritmo
