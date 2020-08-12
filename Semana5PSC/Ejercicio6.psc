Algoritmo clasificarTriangulo
	
	Definir lado1, lado2, lado3 Como Real
	
	Escribir "Programa que clasifica un triangulo en base a la medida de sus lados."
	Escribir Sin Saltar "Ingrese la medida del primer lado: "
	Leer lado1
	Escribir Sin Saltar "Ingrese la medida del segundo lado: "
	Leer lado2
	Escribir Sin Saltar "Ingrese la medida del tercer lado: "
	Leer lado3
	
	Si lado1 = lado2 y lado1 = lado3 Entonces
		Escribir "El triangulo es equilatero."
	SiNo
		Si (lado1 = lado2 y lado1 <> lado3) o (lado2 = lado3 y lado2 <> lado1) o (lado1 = lado3 y lado1 <> lado2) Entonces
			Escribir "El triangulo es isosceles."
		SiNo
			Escribir "El triangulo es escaleno."
		FinSi
	FinSi
	
FinAlgoritmo
