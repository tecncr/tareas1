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

Algoritmo ELIMINAR_ULTIMA_OCURRENCIA
	Definir arr, arr_final, n, num, i, pos_coinc Como Entero
	Definir ya_eliminado Como Logico
	TAM_MAX <- 100
	ya_eliminado <- Falso
	
	Escribir "Programa que elimina la ultima coincidencia de un numero dado en un arreglo."
	
	n <- ingresar_validar_tam(TAM_MAX, "")
	Dimension arr[n], arr_final[n]
	pos_coinc <- n-1
	arr_final[0] <- 0
	Escribir ""
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglo(arr, n)
	
	Escribir Sin Saltar "Ingrese el numero que desee eliminar del arreglo: "
	Leer num
	
	Para i <- n-1 Hasta 0 Con Paso -1 Hacer
		Si ya_eliminado = Falso
			Si arr[i] = num
				ya_eliminado <- Verdadero
			SiNo
				arr_final[pos_coinc] <- arr[i]
				pos_coinc <- pos_coinc-1
			FinSi
		SiNo
			arr_final[pos_coinc] <- arr[i]
			pos_coinc <- pos_coinc-1
		FinSi
	FinPara
	
	Escribir ""
	
	Si ya_eliminado = Falso
		Escribir "El numero ",num," no fue encontrado en el arreglo."
		Escribir "Ningun dato fue eliminado."
	SiNo
		Escribir "La ultima coincidencia de ",num," fue eliminada del arreglo."
		Escribir "El arreglo actual contiene los siguientes elementos: "
		Para i<-1 Hasta n-1 Con Paso 1 Hacer
			Escribir arr_final[i]
		FinPara
	FinSi
FinAlgoritmo
	