Funcion n <- ingresar_validar_elim(max)
	Definir n Como Entero
	Repetir
		Escribir "Ingrese la posicion del alumno que desea eliminar."
		Escribir "Si no ingresa nada por defecto se eliminara el ultimo alumno."
		Escribir Sin Saltar "Posicion: "
		Leer n
		Si n < 0
			Escribir "La posicion no puede ser inferior a 0."
		FinSi
		Si n > max
			Escribir "La posicion ingresada excede el numero de elementos del arreglo (",max,")."
		FinSi
	Mientras Que  n < 0 o n > max
FinFuncion


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
		Escribir Sin Saltar "Ingrese ",texto1,i,"]: "
		Leer arreglo1[i]
		Escribir Sin Saltar "Ingrese ",texto2,i,"]: "
		Leer arreglo2[i]
		Escribir ""
	Fin Para
FinFuncion


Funcion eliminar_alumno(notas Por Referencia, alumnos Por Referencia, tam Por Referencia)
	Definir i, temp1, elim_pos, temp_pos Como Entero
	Definir alumnos2, temp2 Como Texto
	Definir notas2 Como Real
	Definir eliminado como Logico
	eliminado <- Falso
	temp_pos <- 0
	Dimension alumnos2[tam], notas2[tam]
	elim_pos <- ingresar_validar_elim(tam)
	Para i<-1 Hasta tam-1 Con Paso 1 Hacer
		Si i <> elim_pos
			alumnos2[temp_pos] <- alumnos[i]
			notas2[temp_pos] <- notas[i]
			temp_pos <- temp_pos+1
		SiNo
			eliminado <- Verdadero
		FinSi
	FinPara
	
	Escribir "La lista de alumnos con el alumno eliminado es: "
	Escribir ""
		
	Para i <- 0 Hasta temp_pos-1 Con Paso 1 Hacer
		Escribir alumnos2[i]," con promedio ",notas2[i]
	FinPara

	Escribir ""
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
	Escribir ""
	Escribir "La lista de alumnos por orden de merito (promedio descendiente) es: "
	Escribir ""
	
	Para i <- 0 Hasta tam-1 Con Paso 1 Hacer
		Escribir "Posicion [",i,"]: ",i+1,"° puesto: ",alumnos[i]," con promedio ",notas[i]
	FinPara
	
	Escribir ""
FinFuncion


Funcion mostrar_alumno_mas_bajo(notas Por Referencia, alumnos Por Referencia, tam)
	Definir i, pos_menor_promedio, pos_arr2 Como Entero
	Definir promedio_menor Como Real
	promedio_menor <- notas[0]
	
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Si notas[i] < promedio_menor
			promedio_menor <- notas[i]
		FinSi
	FinPara
	
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Si notas[i] == promedio_menor
			Escribir "El alumno ",alumnos[i]," obtuvo el promedio mas bajo (",promedio_menor,")."
		FinSi
	FinPara
FinFuncion


Funcion mostrar_alumnos_bajo_14(notas Por Referencia, alumnos Por Referencia, tam)
	Definir i Como Entero
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Si notas[i] < 14
			Escribir "El alumno ",alumnos[i]," obtuvo un promedio menor a 14"
		FinSi
	FinPara
FinFuncion


Algoritmo REGISTRO_DE_ALUMNOS
	Definir n1 Como Entero
	Definir promedios Como Real
	Definir nombres Como Texto
	Definir aaa Como Caracter
	TAM_MAX <- 100
	
	Escribir "Programa que simula un registro de alumnos."
	Escribir ""
	
	n1 <- ingresar_validar_tam(TAM_MAX, "")
	Dimension promedios[n1], nombres[n1]
	Limpiar Pantalla
	Escribir "[RELLENANDO ARREGLO]"
	rellenar_arreglos(nombres,"el nombre del alumno que ocupara la posicion [",promedios,"el promedio del alumno que ocupara la posicion [",n1)
	Limpiar Pantalla
	
	Escribir "Presione enter para mostrar la lista de alumnos por orden de merito."
	Leer aaa
	
	ordenar_merito(promedios, nombres, n1)
	Escribir "Presione enter para mostrar alumno con el promedio mas bajo."
	Leer aaa
	
	mostrar_alumno_mas_bajo(promedios, nombres, n1)
	Escribir "Presione enter para mostrar alumnos con un promedio bajo 14."
	Leer aaa
	
	mostrar_alumnos_bajo_14(promedios, nombres, n1)
	Escribir "Presione enter para eliminar un alumno."
	Leer aaa
	
	eliminar_alumno(promedios, nombres, n1)
	
	Escribir "Hasta luego."
	
FinAlgoritmo