Algoritmo FACTORIAL
	
	Definir i, num, f Como Entero
	
	Escribir "Programa que calcula el factorial de un numero."
	
	Repetir
		Escribir "Ingrese un numero: "
		Leer num 
		Si num < 0 Entonces
			Escribir "No se permiten numeros negativos debido a"
			Escribir "la inexistencia del factorial de estos."
			Escribir "Por favor ingrese un numero positivo."
		FinSi
	Mientras Que num < 0
	
	Si num>=0 Entonces
		
		i <- 0
		f <- 1
		
		Mientras i<num Hacer 
			i <- i + 1
			f <- f * i
		FinMientras
		
		Escribir "El factorial de ", num, " es: ", f 
		
	Sino 
		Si num = 0 o num = 1 entonces 
			Escribir "El factorial de ", num, "! es: 1"
		FinSi
	FinSi
	
FinAlgoritmo