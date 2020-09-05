Algoritmo SUMA_IMPARES
	
	Definir num, suma, i Como Entero
	
	suma <- 0	
	
	Escribir "Programa que calcula la suma de numeros impares."
	Escribir "Escriba el numero limite de los sumandos: "
	Leer num
	
	Mientras num<0 Hacer
		Escribir "No puede ser numero negativo, digite un positivo"
		Leer num
	FinMientras
	
	Para i<-1 Hasta num con paso 1 Hacer
		Si i%2 > 0 Entonces
			suma <- suma + i
		FinSi
	FinPara
	
    Escribir "La suma de los numeros impares es: ",suma
	
FinAlgoritmo