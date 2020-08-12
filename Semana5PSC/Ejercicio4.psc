Algoritmo descuentoTienda
	
	Definir cantidad Como Entero
	Definir precioUnit, subtotal, descuento, montoTotal Como Real
	
	Escribir "Programa que calcula el monto final de una compra."
	Escribir Sin Saltar "Ingrese el precio unitario del producto: S/ "
	Leer precioUnit
	Escribir  Sin Saltar "Ingrese la cantidad de productos que va a llevar: "
	Leer cantidad
	
	subtotal <- precioUnit * cantidad
	
	Si subtotal <= 75 Entonces
		descuento <- subtotal * 0.05
	SiNo
		Si subtotal < 150 Entonces
			descuento <- subtotal * 0.1
		SiNo
			descuento <- subtotal * 0.15
		FinSi
	FinSi
	
	montoTotal <- subtotal - descuento
	
	Escribir "El monto de la compra es: S/ ", subtotal
	Escribir "Tiene un descuento de S/ ", descuento
	Escribir "El monto final a pagar es de: S/ ", montoTotal
	
FinAlgoritmo
