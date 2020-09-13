Algoritmo SUMATORIA_FIBONACCI
	
	Definir num, sumatoria, n1, n2, n3, i Como Entero
	
	Escribir "Algoritmo que calcula la suma de los N primeros números de Fibonacci"
	
	Repetir
		Escribir Sin Saltar "Ingrese el valor de N: "
		Leer num
		Si num < 0
			Escribir "N no admite valores negativos."
			Escribir "Inténtelo nuevamente."
		FinSi
		Si num > 45
			Escribir "Debido a limitaciones de PSeInt, N solo admite valores hasta 45."
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que num < 0 o num > 45
	
	n1 <- 0
	n2 <- 1
	n3 <- 0
	sumatoria <- 0
	
	Para i <- 1 Hasta num Con Paso 1 Hacer
		sumatoria <- sumatoria+n1
		n3 <- n1+n2
		n1 <- n2
		n2 <- n3
	FinPara
	
	Escribir "La sumatoria de los ",num," primeros numeros de Fibonacci es: ",sumatoria
	
FinAlgoritmo