Algoritmo SIMPLIFICAR_FRACCION
	
	Definir num, den, a, b, n1, n2 como Entero
	
	Escribir "Programa que simplifica una fracción."
	Escribir "Ingrese el numerador:"
	Leer a 
	Escribir "Ingrese el denominador:"
	Leer b
	
	n1<-a
	n2<-b
	
	Mientras n1 <> n2 hacer
		Si n1 > n2 Entonces
			n1 <- n1-n2
		Sino 
			n2 <- n2-n1
		FinSi
	FinMientras
	
	num <- a/n1
	den <- b/n1
	
	Si den = 1 Entonces
		Escribir "La fracción ", a, "/", b , " simplificada queda como: ",  num
	SiNo
		Escribir "La fracción ", a, "/", b , " simplificada queda como: ",  num, "/", den 
	FinSi
	
FinAlgoritmo