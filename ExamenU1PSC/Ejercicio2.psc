Algoritmo menorDeCincoNumeros
	
	Definir num1, num2, num3, num4, num5 Como Entero
	
	Escribir "Programa que indica el menor de cinco numeros."
	Escribir "Ingrese el primer numero: "
	Leer num1
	Escribir "Ingrese el segundo numero: "
	Leer num2
	Escribir "Ingrese el tercer numero: "
	Leer num3
	Escribir "Ingrese el cuarto numero: "
	Leer num4
	Escribir "Ingrese el quinto numero: "
	Leer num5
	
	Si num1<=num2 y num1<=num3 y num1<=num4 y num1<=num5 Entonces
		Escribir "El numero menor es: ",num1
	SiNo
		Si num2<=num1 y num2<=num3 y num2<=num4 y num2<=num5 Entonces
			Escribir "El numero menor es: " num2
		SiNo
			Si num3<=num1 y num3<=num2 y num3<=num4 y num3<=num5 Entonces
				Escribir  "El numero menor es: ", num3
			SiNo
				Si num4<=num1 y num4<=num2 y num4<=num3 y num4<=num5 Entonces
					Escribir "El número menor es ", num4
				SiNo
						Escribir "El numero menor es: ", num5
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	
FinAlgoritmo