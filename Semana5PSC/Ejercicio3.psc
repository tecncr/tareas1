Algoritmo imprimirAscendente
	
	Definir num1, num2, num3 Como Real
	
	Escribir "Programa que imprime tres numeros en orden ascendente."
	Escribir "Ingrese el primer numero: "
	Leer num1
	Escribir "Ingrese el segundo numero: "
	Leer num2
	Escribir "Ingrese el tercer numero: "
	Leer num3
	Escribir Sin Saltar "Los numeros ordenados de manera ascendente son: "
	
	Si num1 <= num2 y num1 <= num3 y num2 <= num3 Entonces
		Escribir num1 , ", " , num2 , ", " , num3
	SiNo
		Si num1 <= num2 y num1 <= num3 y num3 <= num2 Entonces
			Escribir num1 , ", " , num3 , ", " , num2
		SiNo
			Si num2 <= num1 y num2 <= num3 y num1 <= num3 Entonces
				Escribir num2 , ", " , num1 , ", " , num3
			SiNo
				Si num2 <= num1 y num2 <= num3 y num3 <= num1 Entonces
					Escribir num2 , ", " , num3 , ", " , num1
				SiNo
					Si num3 <= num1 y num3 <= num2 y num1 <= num2 Entonces
						Escribir num3 , ", " , num1 , ", " , num2
					SiNo
						Si num3 <= num1 y num3 <= num2 y num2 <= num1 Entonces
							Escribir num3 , ", " , num2 , ", " , num1
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo