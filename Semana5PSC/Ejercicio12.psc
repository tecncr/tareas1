Algoritmo VALOR_F
	
	Definir a, b, f Como Real
	
	Escribir "Programa que calcula el valor de la funcion F de acuerdo a los valores de A y B"
	Escribir Sin Saltar "Ingrese el valor de A: "
	Leer a
	
	Mientras a < 0 Hacer
		Escribir "A no puede ser negativo."
		Escribir Sin Saltar "Ingrese el valor de A: "
		Leer a
	FinMientras
	
	Escribir Sin Saltar "Ingrese el valor de B: "
	Leer b

	Si a < b Entonces
		f <- rc(a) * b
	FinSi
	
	Si a > b y b < 0 Entonces
		f <- a^2 + b
	FinSi
	
	Si a > b y b >= 0 Entonces
		f <- a - b
	FinSi
	
	Escribir "El valor de F es ", f
	
FinAlgoritmo
