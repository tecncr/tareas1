Algoritmo BENEFICIOS_CLIENTE
	
	Definir cliente, articulo Como Caracter
	Definir mediosdepago Como Texto
	Definir descuento Como Entero
	Escribir "Programa que muestra los descuentos y medios de pago de acuerdo a la clasificacion del cliente."
	
	Repetir
		Escribir "Tipos de clientes admitidos: e (Excelente), b (Bueno), r (Regular), m (Malo)."
		Escribir Sin Saltar "Ingrese el tipo de cliente: "
		Leer cliente
		Si cliente <> "e" y cliente <> "b" y cliente <> "r" y cliente <> "m" Entonces
			Escribir "El tipo de cliente ingresado es invalido."
		Fin Si
	Hasta Que cliente = "e" o cliente = "b" o cliente = "r" o cliente = "m"
	
	Repetir
		Escribir Sin Saltar "Ingrese el tipo de articulo que desea adquirir (a/b/c): "
		Leer articulo
		Si articulo <> "a" y articulo <> "b" y articulo <> "c" Entonces
			Escribir "El articulo ingresado es invalido."
		Fin Si
	Hasta Que articulo = "a" o articulo = "b" o articulo = "c"
	
	Segun cliente Hacer
		'e':
			Segun articulo Hacer
				'a':
					descuento <- 40
				'b':
					descuento <- 30
				'c':
					descuento <- 20
			Fin Segun
			mediosdepago <- "efectivo, cheque o al crédito."
		'b':
			Segun articulo Hacer
				'a':
					descuento <- 30
				'b':
					descuento <- 20
				'c':
					descuento <- 10
			Fin Segun
			mediosdepago <- "efectivo, cheque o al crédito."
		'r':
			Segun articulo Hacer
				'a':
					descuento <- 20
				'b':
					descuento <- 10
				'c':
					descuento <- 0
			Fin Segun
			mediosdepago <- "efectivo o cheque."
		'm':
			descuento <- 0
			mediosdepago <- "efectivo solamente."
	Fin Segun
	
	Escribir "El cliente de tipo ", cliente, " tiene un descuento del ", descuento , "%" , " en el articulo ", articulo
	Escribir "Y lo puede pagar con ", mediosdepago
	
FinAlgoritmo