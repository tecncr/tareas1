Algoritmo PAGO_ENERGIA_ELECTRICA
	
	Definir kw, impuesto, subtotal, total Como Real
	
	Escribir "Programa que calcula el monto a pagar por el consumo de energia electrica."
	Escribir Sin Saltar "Ingrese el consumo electrico en kilowatts: "
	Leer kw
	
	subtotal <- kw * 0.5
	
	Si subtotal <= 50 Entonces
		impuesto = subtotal * 0.03
	SiNo
		Si subtotal <= 100 Entonces
			impuesto = subtotal * 0.05
		SiNo
			impuesto = subtotal * 0.07
		Fin Si
	FinSi
	
	total <- subtotal + impuesto
	
	Escribir "El subtotal por la energia consumida es de   S/ " , subtotal
	Escribir "El monto del impuesto es				      S/ " , impuesto
	Escribir "El monto total a pagar es				      S/ " , total
	
FinAlgoritmo