Algoritmo DIVISORES_NUMEROS
	
	Definir i, num Como Entero
	
	i<-1
	
	Escribir "Ingrese el numero que desee evaluar: "
	Leer num
	
	Si num<3000 Entonces
		Mientras i <= num/2 Hacer
			Si num % i = 0 Entonces
				Escribir i
			FinSi
			i <- i+1
		Fin Mientras
		Escribir num;
	SiNo
		Escribir "Numero fuera de rango."
	FinSi
	
FinAlgoritmo