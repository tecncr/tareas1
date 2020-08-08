Algoritmo montoCompraDescuento
	
	Definir precioU, porcDescuento, montoDescuento, montoFinal Como Real
	Definir cantidad Como Entero
	Definir origen, talla Como Caracter
	
	Escribir "Programa que calcula el monto final de un pedido en esta distribuidora de ropa."
	Escribir "Ingrese el origen de la prenda (n para nacional, i para importada): "
	Leer origen
	
	Mientras (origen <> "n") y (origen <> "i") Hacer
		Escribir "El origen ingresado no es valido."
		Escribir "Ingrese el origen (n/i): "
		Leer origen
	Fin Mientras
	
	Escribir "Ingrese la talla (s/m/l): "
	Leer talla
	
	Mientras talla <> "s" y talla <> "m" y talla <> "l" Hacer
		Escribir "La talla ingresada no es valida."
		Escribir "Ingrese la talla (s/m/l): "
		Leer talla
	Fin Mientras
	
	Escribir "Ingrese la cantidad de prendas adquiridas: "
	Leer cantidad
	Escribir "Ingrese el precio de cada prenda: "
	Leer precioU
	
	Si origen = "n" Entonces
		Si talla = "s" Entonces
			porcDescuento <- 0.1
		SiNo
			Si talla = "m" Entonces
				porcDescuento <- 0.12
			SiNo
				Si talla = "l" Entonces
					porcDescuento <- 0.15
				Fin Si
			Fin Si
		Fin Si
	SiNo
		Si origen = "i" Entonces
			Si talla = "s" Entonces
			porcDescuento <- 0.05
			SiNo
				Si talla = "m" Entonces
					porcDescuento <- 0.07
				SiNo
					Si talla = "l" Entonces
					porcDescuento <- 0.1
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	
	montoDescuento <- (precioU * cantidad) * porcDescuento
	montoFinal <- (precioU * cantidad) - montoDescuento
	
	Escribir "El monto final a pagar es: S/ ",montoFinal
	
FinAlgoritmo