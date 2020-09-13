Funcion num <- iv(max, var_name)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de",var_name
		Leer num
		Si num > max
			Escribir "El valor de",var_name," debe ser como máximo ",max
			Escribir "Inténtelo nuevamente."
		FinSi
		Si num < 0
			Escribir "El valor de",var_name," no puede ser negativo."
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que num > max o num < 0
Fin Funcion


Funcion definitiva <- obtener_notas
	Definir nota1, nota2, nota3, nota4, definitiva Como Entero
	nota1 <- iv(20," la primera nota")
	nota2 <- iv(20," la segunda nota")
	nota3 <- iv(20," la tercera nota")
	nota4 <- iv(20," la cuarta nota")
	definitiva <- redon(nota1*0.25 + nota2*0.2 + nota3*0.25 + nota4*0.3)
FinFuncion


Funcion codigo <- obtener_codigo
	Definir codigo Como Entero
	codigo <- iv(999999999," la identificación del alumno (código)")
FinFuncion


Algoritmo NOTAS_Y_definitivas
	
	Definir n_alumnos, i, codigos, definitivas, sumatoria_definitivas Como Entero
	Definir promedio_global Como Real
	sumatoria_definitivas <- 0
	
	Escribir "Programa que calcula notas y promedios."
	
	n_alumnos <- iv(100000,"l número de alumnos")
	
	Dimension codigos[n_alumnos]
	Dimension definitivas[n_alumnos]
	
	Para i<-0 Hasta n_alumnos-1 Con Paso 1 Hacer
		Limpiar Pantalla
		Escribir "[INGRESANDO DATOS DEL ALUMNO ",i+1,"]"
		Escribir ""
		codigos[i] <- obtener_codigo()
		definitivas[i] <- obtener_notas()
	Fin Para
	
	Para i<-0 Hasta n_alumnos-1 Con Paso 1 Hacer
		sumatoria_definitivas <- sumatoria_definitivas + definitivas[i]
	FinPara
	
	promedio_global <- sumatoria_definitivas/n_alumnos
	Limpiar Pantalla
	
	Para i<-0 Hasta n_alumnos-1 Con Paso 1 Hacer
		Escribir "El alumno con código ",codigos[i]," tiene como nota definitiva ",definitivas[i]
	FinPara
	
	Escribir ""
	Escribir "El promedio de todo el grupo en este curso es ",promedio_global
	
FinAlgoritmo
