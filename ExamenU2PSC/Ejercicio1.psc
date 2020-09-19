Funcion t_cliente <- obtener_tcliente(t1, t2, t3, desc1, desc2, desc3)
	Definir t_cliente Como Caracter
	Repetir
		Escribir "Tipos de clientes admitidos: ",t1," (",desc1,"), ",t2," (",desc2,"), ",t3," (",desc3,"), "
		Escribir Sin Saltar "Ingrese el tipo de cliente: "
		Leer t_cliente
		Si t_cliente <> t1 y t_cliente <> t2 y t_cliente <> t3 Entonces
			Escribir "El tipo de cliente ingresado es invalido."
			Escribir ""
		Fin Si
	Mientras Que t_cliente <> t1 y t_cliente <> t2 y t_cliente <> t3
FinFuncion


Funcion t_articulo <- obtener_articulo(a1, a2, a3, a4)
	Definir t_articulo Como Caracter
	Repetir
		Escribir Sin Saltar "Ingrese el tipo de articulo que desea adquirir (",a1,"/",a2,"/",a3,"/",a4,"): "
		Leer t_articulo
		Si t_articulo <> a1 y t_articulo <> a2 y t_articulo <> a3 y t_articulo <> a4 Entonces
			Escribir ""
			Escribir "El articulo ingresado es invalido."
			Escribir ""
		Fin Si
	Mientras Que t_articulo <> a1 y t_articulo <> a2 y t_articulo <> a3 y t_articulo <> a4
FinFuncion


Algoritmo BENEFICIOS_CLIENTE
	
	Definir cliente, articulo Como Caracter
	Definir mediosdepago, tipo Como Texto
	Definir descuento Como Entero
	Escribir "Programa que muestra los descuentos y medios de pago de acuerdo"
	Escribir "a la clasificacion del cliente."
	
	cliente <- obtener_tcliente('e','b','m',"Excelente","Bueno","Malo")
	
	Escribir ""
	
	articulo <- obtener_articulo('a','b','c','d')
	
	Segun cliente Hacer
		'e':
			Segun articulo Hacer
				'a': descuento <- 50
				'b': descuento <- 40
				'c': descuento <- 20
				'd': descuento <- 10
			Fin Segun
			mediosdepago <- "efectivo, cheque o al crédito."
			tipo <- "excelente"
		'b':
			Segun articulo Hacer
				'a': descuento <- 25
				'b': descuento <- 20
				'c': descuento <- 10
				'd': descuento <- 5
			Fin Segun
			mediosdepago <- "efectivo o cheque."
			tipo <- "bueno"
		'm':
			descuento <- 0
			mediosdepago <- "efectivo solamente."
			tipo <- "malo"
	Fin Segun
	
	Escribir ""
	Escribir "El cliente ", tipo ," tiene un descuento del ", descuento , "%" , " en el articulo ", articulo
	Escribir "Y lo puede pagar con ", mediosdepago
	
FinAlgoritmo