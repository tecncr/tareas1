Algoritmo MATRICULARSE
	
	Definir creditos, total Como Entero
	Definir curso Como Caracter
	
	total <- 0

	Escribir "Programa que valida los creditos matriculados."
	
	Repetir
		Escribir "Ingrese el nombre del curso en el que desea matricularse o ingrese x para detener el ingreso de cursos."
		Escribir "Curso:"
		Leer curso
		Si curso <> "x"
			Escribir 'Ingrese el número de créditos del curso ",curso
			Leer creditos
			Si total+creditos > 22 Entonces
				Escribir "No se pudo matricular en el curso ", curso, " porque al hacerlo excederia el máximo de creditos permitidos (22)."
			SiNo
				total <- total+creditos
			FinSi
		FinSi
	Hasta Que total >= 22 o curso = "x"
	
	Escribir "El total de los creditos matriculados es: ",total
	
FinAlgoritmo