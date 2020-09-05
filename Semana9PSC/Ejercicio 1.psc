Algoritmo MAXIMO_MINIMO_MEDIA
	
	Definir num, suma, conteo, maximo, minimo Como Entero 
	Definir media Como Real 
	
	Escribir "Programa que halla el maximo, minimo y la media de N numeros dados "
	Escribir "Ingrese un numero positivo: "
	Leer num 
	
	suma<-0
	conteo<-0
	media<-0
	maximo<-0
	minimo<-99999 
	
	Si num >0 Entonces
		Mientras num > 0 Hacer
			Si num > maximo Entonces
				maximo <- num
			Fin si 
			Si num < minimo entonces 
				minimo <- num 
			FinSi
			conteo <- conteo+1
			suma <- suma+num
			Escribir " Ingrese un numero que sea positivo "
			Leer num
		FinMientras
		
		media <- suma/conteo
		
		Escribir "El mayor numero es: ", maximo
		Escribir "El menor numero es: ", minimo 
		Escribir "El promedio de los números ingresados es: ", media
	Sino 
		Si num < 0 entonces
			Escribir "Solo se admiten numeros positivos."
		FinSi 
	FinSi
	
	
FinAlgoritmo
