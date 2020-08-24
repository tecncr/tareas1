Algoritmo MENSUALIDAD
	
	Definir cuota, pdescuento, descuento, importe Como Real
	Definir tipo, colegio Como Caracter
	
	Escribir "Programa que calcula el importe a pagar por un alumno."
	Escribir "Ingrese la cuota base: "
	Leer cuota
	
	Repetir
		Escribir "Ingrese el tipo de alumno (A, B, C): "
		Leer tipo
		Si tipo<>'a' y tipo<>'b' y tipo<>'c' y tipo<>'A' y tipo<>'B' y tipo<>'C'
			Escribir "Tipo de alumno inválido. Solo se admiten los valores A, B, C"
		FinSi
	Mientras Que tipo<>'a' y tipo<>'b' y tipo<>'c' y tipo<>'A' y tipo<>'B' y tipo<>'C'
	
	Repetir
		Escribir "Ingrese el tipo de colegio del que proviene. "
		Escribir "(N para Nacional, P para particular): "
		Leer colegio
		Si colegio<>"n" y colegio<>"p" y colegio<>"N" y colegio<>"P"
			Escribir "Tipo de colegio inválido. Solo se admiten los valores N, P"
		FinSi
	Mientras Que colegio<>"n" y colegio<>"p" y colegio<>"N" y colegio<>"P"
	
	Segun tipo Hacer
		'a':
			Segun colegio Hacer
				'n':
					pdescuento <- 0.5
				'N':
					pdescuento <- 0.5
				'p':
					pdescuento <- 0.25
				'P':
					pdescuento <- 0.25

			Fin Segun
		'A':
			Segun colegio Hacer
				'n':
					pdescuento <- 0.5
				'N':
					pdescuento <- 0.5
				'p':
					pdescuento <- 0.25
				'P':
					pdescuento <- 0.25
					
			Fin Segun
		'b':
			Segun colegio Hacer
				'n':
					pdescuento <- 0.4
				'N':
					pdescuento <- 0.4
				'p':
					pdescuento <- 0.2
				'P':
					pdescuento <- 0.2
					
			Fin Segun
		'B':
			Segun colegio Hacer
				'n':
					pdescuento <- 0.4
				'N':
					pdescuento <- 0.4
				'p':
					pdescuento <- 0.2
				'P':
					pdescuento <- 0.2
					
			Fin Segun
		'c':
			Segun colegio Hacer
				'n':
					pdescuento <- 0.3
				'N':
					pdescuento <- 0.3
				'p':
					pdescuento <- 0.15
				'P':
					pdescuento <- 0.15
					
			Fin Segun
		'C':
			Segun colegio Hacer
				'n':
					pdescuento <- 0.3
				'N':
					pdescuento <- 0.3
				'p':
					pdescuento <- 0.15
				'P':
					pdescuento <- 0.15
					
			Fin Segun
	FinSegun
	
	descuento <- cuota * pdescuento
	importe <- cuota - descuento
	
	Escribir "El alumno puede acceder a un descuento del ",pdescuento*100,"%"
	Escribir "Equivalente a S/ ",descuento
	Escribir "El importe total a pagar es S/ ", importe
	
FinAlgoritmo