Funcion suma <- sumadivpropios (num)
	Definir suma, a Como Entero
	suma <- 0
	Para a<-1 Hasta trunc(num/2) Con Paso 1 Hacer
		Si num MOD a == 0
			suma <- suma + a
		FinSi
	FinPara
Fin Funcion


Algoritmo NUMEROS_AMIGOS
	Definir n, i ,j Como Entero
	Escribir "Programa que calcula numeros amigos hasta N."
	Escribir "Ingrese el valor de N: "
	Leer n
	Para i<-1 Hasta n-1 con paso 1 Hacer
		Para j<-1 hasta n-1 con paso 1 Hacer
			Si sumadivpropios(i) == j y sumadivpropios(j) == i y i<j
				Escribir "Los numeros ",i," y ",j," son amigos."
			FinSi
		FinPara
	FinPara
FinAlgoritmo
