Algoritmo INTERESES_A_PAGAR
	
	Definir monto, interes, total Como Real
	Definir plazo Como Caracter

	Escribir "Programa que calcula los intereses a pagar."
	Escribir "Ingrese el monto del prestamo: "
	Leer monto
	
	Repetir
		Escribir "Seleccione el plazo en el que se pagara el prestamo."
		Escribir "Ingrese a si el prestamo sera pagado en 24 meses."
		Escribir "Ingrese b si el prestamo sera pagado en 18 meses."
		Escribir "Ingrese c si el prestamo sera pagado en 12 meses."
		Escribir "Ingrese d si el prestamo sera pagado en 6 meses."
		Escribir "Ingrese e si el prestamo sera pagado en 3 meses."
		Escribir "Escriba la opcion del plazo de pago: "
		Leer plazo
		Si plazo <> 'a' y plazo <> 'b' y plazo <> 'c' y plazo <> 'd' y plazo <> 'e'
			Escribir "La opcion ingresada es invalida."
		FinSi
	Mientras Que plazo <> 'a' y plazo <> 'b' y plazo <> 'c' y plazo <> 'd' y plazo <> 'e'
	
	Segun plazo Hacer
		'a': interes <- monto * 0.12
		'b': interes <- monto * 0.1
		'c': interes <- monto * 0.09
		'd': interes <- monto * 0.08
		'e': interes <- monto * 0.06
	Fin Segun
	
	total <- monto + interes
	
	Escribir "El interes a pagar sera de S/ ",interes
	Escribir "El monto total a pagar sera S/ ",total
	
FinAlgoritmo