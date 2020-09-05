Funcion inverso <- obtener_inverso (num)
	Definir a, inverso, res Como Entero
	
	a <- num
	inverso <- 0
	
	Mientras a > 0
		res <- a%10
		inverso <- inverso*10 + res
		a <- trunc(a/10)
	FinMientras	
Fin Funcion


Algoritmo CAPICÚA
	Definir n Como Entero
	
	Escribir "Programa que indica si un número es capicúa o no."
	Escribir "Ingrese un número: "
	Leer n
	
	Si n = obtener_inverso(n)
		Escribir "El número ",n," es capicúa."
	SiNo
		Escribir "El número ",n," NO es capicúa."
	FinSi
FinAlgoritmo