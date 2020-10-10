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

Funcion rellenar_arreglos(arreglo1 Por Referencia, texto1, arreglo2 Por Referencia, texto2, tam)
	Definir i Como Entero
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Escribir Sin Saltar "Ingrese ",texto1," ",i+1,": "
		Leer arreglo1[i]
		Escribir Sin Saltar "Ingrese ",texto2," ",i+1,": "
		Leer arreglo2[i]
		Escribir ""
	Fin Para
FinFuncion

Funcion ordenar_merito(notas Por Referencia, alumnos Por Referencia, tam)
	Definir i, temp1 Como Entero
	Definir temp2 Como Texto
	Para i<-1 Hasta tam-1 Con Paso 1 Hacer
		Para j<-0 Hasta tam-2 Con Paso 1 Hacer
			Si notas[j] < notas[j+1]
				temp1 <- notas[j]
				temp2 <- alumnos[j]
				notas[j] <- notas[j+1]
				alumnos[j] <- alumnos[j+1]
				notas[j+1] <- temp1
				alumnos[j+1] <- temp2
			FinSi
		FinPara
	FinPara
FinFuncion

Algoritmo ORDEN_DE_MERITO
	Definir n1 Como Entero
	Definir promedios Como Real
	Definir nombres Como Texto
	TAM_MAX <- 100
	
	Escribir "Programa que muestra el orden de merito por promedios."
	Escribir "de una lista de alumnos."
	Escribir ""
	
	n1 <- ingresar_validar_tam(TAM_MAX, "")
	Dimension promedios[n1], nombres[n1]
	Limpiar Pantalla
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglos(nombres,"el nombre del alumno",promedios,"el promedio del alumno",n1)
	Limpiar Pantalla
	
	ordenar_merito(promedios, nombres, n1)
	
	Escribir ""
	Escribir "La lista de alumnos por orden de merito es: "
	Escribir ""
	
	Para i <- 0 Hasta n1-1 Con Paso 1 Hacer
		Escribir i+1,"° puesto: ",nombres[i]," con promedio ",promedios[i]
	FinPara
	
FinAlgoritmo