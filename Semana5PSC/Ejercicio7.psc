Algoritmo clasificarTriangulosPorAngulo
	
	Definir ang1, ang2, ang3 Como Real
	
	Escribir "Programa que clasifica triangulos en base a la medida de sus angulos internos."
	
	Repetir
		Escribir Sin Saltar "Ingrese la medida del primer angulo: "
		Leer ang1
		Escribir Sin Saltar "Ingrese la medida del segundo angulo: "
		Leer ang2
		Escribir Sin Saltar "Ingrese la medida del tercer angulo: "
		Leer ang3
		
		Si ang1 + ang2 + ang3 <> 180
			Escribir "La suma de los angulos internos de un triangulo debe ser igual a 180°."
		FinSi
	Hasta Que ang1 + ang2 + ang3 = 180
	
	Si ang1 = 90 o ang2 = 90 o ang3 = 90 Entonces
		Escribir "El triangulo es rectangulo."
	SiNo
		Si ang1 > 90 o ang2 > 90 o ang3 > 90 Entonces
			Escribir "El triangulo es obtusangulo."
		SiNo
			Escribir "El triangulo es acutangulo."
		FinSi
	FinSi
	
FinAlgoritmo
