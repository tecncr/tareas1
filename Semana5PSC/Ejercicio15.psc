Algoritmo BENEFICIOS_CLIENTE
	Definir cliente, articulo, mediosdepago Como Texto
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
	
	Si cliente = "e" Entonces
		mediosdepago <- "efectivo, cheque o al credito."
		Si articulo = "a" Entonces
			descuento <- 40
		SiNo
			Si articulo = "b" Entonces
				descuento <- 30
			SiNo
				descuento <- 20
			Fin Si
		Fin Si
	SiNo
		Si cliente = "b" Entonces
			mediosdepago <- "efectivo, cheque o al credito."
			Si articulo = "a" Entonces
				descuento <- 30
			SiNo
				Si articulo = "b" Entonces
					descuento <- 20
				SiNo
					descuento <- 10
				Fin Si
			Fin Si
		SiNo
			Si cliente = "r" Entonces
				mediosdepago <- "efectivo o cheque."
				Si articulo = "a" Entonces
					descuento <- 20
				SiNo
					Si articulo = "b" Entonces
						descuento <- 10
					SiNo
						descuento <- 0
					Fin Si
				Fin Si
			SiNo
				Si cliente = "m" Entonces
					mediosdepago <- "efectivo solamente."
					descuento <- 0
				FinSi
			Fin Si
		Fin Si
	Fin Si
	
	Escribir "El cliente de tipo ", cliente, " tiene un descuento del ", descuento , "%" , " en el articulo ", articulo
	Escribir "Y lo puede pagar con ", mediosdepago
	
FinAlgoritmo