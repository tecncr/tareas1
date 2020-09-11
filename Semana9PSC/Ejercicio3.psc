Algoritmo CUBOS_PERFECTOS
	
	Definir num, suma_cubos, tmp, u_cifra, d_cubo Como Entero
	
	Escribir "Programa que calcula los 5 cubos perfectos / números de Amstrong"
	Escribir "A continuación se mostrarán los resultados:"
	
	Para num <- 1 Hasta 500 Con Paso 1 Hacer
		
		suma_cubos <- 0
		tmp <- num
		
		Repetir
			u_cifra <- tmp MOD 10
			d_cubo <- u_cifra^3
			suma_cubos <- suma_cubos + d_cubo
			tmp <- trunc(tmp/10)
		Hasta Que tmp = 0
		
		Si suma_cubos = num Entonces
			Escribir num
		FinSi
		
	FinPara
	
FinAlgoritmo