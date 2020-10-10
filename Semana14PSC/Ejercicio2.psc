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

Algoritmo DIFERENCIA_ARREGLOS
	Definir a, b, c, n1, n2, coincidencias, cont_arr_c, i, j, k Como Entero
	cont_arr_c <- 0
	TAM_MAX <- 100

	Escribir "Programa que muestra los elementos que pertenecen a un arreglo A"
	Escribir "pero que no pertenecen a un arreglo B."
	Escribir ""
	
	n1 <- ingresar_validar_tam(TAM_MAX, " A")
	Dimension a[n1], c[n1]
	Limpiar Pantalla
	Escribir "[RELLENANDO ARREGLO A]"
	rellenar_arreglo(a, n1)
	Limpiar Pantalla
	
	n2 <- ingresar_validar_tam(TAM_MAX, " B")
	Dimension b[n2]
	Limpiar Pantalla
	Escribir "[RELLENANDO ARREGLO B]"
	rellenar_arreglo(b, n2)
	Limpiar Pantalla
	
	Para i <- 0 Hasta n1-1 Con Paso 1 Hacer
		coincidencias <- 0
		Para j <- 0 Hasta n2-1 Con Paso 1 Hacer
			Si a[i] = b[j]
				coincidencias <- coincidencias+1
			FinSi
		Fin Para
		Si coincidencias = 0
			c[cont_arr_c] <- a[i]
			cont_arr_c <- cont_arr_c+1
		FinSi
	Fin Para
	
	Escribir "Los numeros del arreglo C (que pertenecen a A pero no pertenecen a B) son: "
	Para k <- 0 Hasta cont_arr_c-1 Con Paso 1 Hacer
		Escribir Sin Saltar c[k], ", "
	FinPara
	Escribir Sin Saltar " fin del arreglo C."
	Escribir ""
	
FinAlgoritmo
