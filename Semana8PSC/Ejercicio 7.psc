Algoritmo PARES_IMPARES
	
	Definir a, b, impares, digitos, n Como Entero
	
	impares <- 0
	digitos <- 0
	
	Escribir "Programa que muestra el número de dígitos de un número y cuántos son impares."
	
	Repetir
		Escribir "Escriba un número:"
		Leer n
		Si n < 0 Entonces
			Escribir "Por favor ingrese un número entero positivo."
		Fin Si
	Mientras Que n < 0
	
	a <- n
	
	Mientras a>0 Hacer
		b <- a%10
		Si b%2 > 0 Entonces
			impares <- impares+1
		Fin Si
		a <- (a-b)/10
		digitos <- digitos+1
	Fin Mientras
	
	Si n = 0
		digitos <- 1
	FinSi
	
	Escribir "El número ",n," tiene ",digitos," dígitos, de los cuales ",impares," de ellos son impares."
	
FinAlgoritmo