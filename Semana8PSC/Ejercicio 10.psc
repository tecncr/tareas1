Algoritmo NUMEROS_PERFECTOS
	
	Definir num, x, perfecto como entero 
	
	x <- 2
	perfecto <- 0
	
	Escribir "Numeros perfectos "
	Escribir " Ingrese un numero: "
	Leer num

	Mientras x <= num hacer
		Si num mod x = 0 Entonces
			 perfecto <- perfecto + (num/x)
		 FinSi
		 x <- x+1
	 FinMientras
	 
	Si perfecto = num entonces 
		Escribir " El numero ", num , " es un numero perfecto."
	Sino 
		Escribir " El numero ", num, " no es un numero perfecto."
	FinSi
	
FinAlgoritmo