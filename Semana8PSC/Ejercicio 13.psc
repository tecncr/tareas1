Algoritmo PARTIR_NUMEROS
	
	Definir num, n, a, b Como Entero
	
	Escribir "Maximizador de producto de 2 sumandos de un numero positivo."
	
	Repetir
		Escribir "Ingrese el numero:"
		Leer num
		Si num < 0 Entonces
			Escribir "Por favor ingrese un numero positivo."
		FinSi
	Mientras Que num < 0
	
	n <- num
	
	Si n%2 > 0
		n <- n+1
		a <- n/2
		b <- a-1
	SiNo
		a <- n/2
		b <- n/2
	FinSi
	
	Escribir "Los dos sumandos que conforman ",num," con producto máximo son: ",a," y ",b
	
FinAlgoritmo