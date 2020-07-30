Algoritmo precioVentaAutomovil
	Definir costo, precioFinal Como Real
	Escribir "Programa que calcula el precio de venta final de un automovil."
	Escribir "Ingrese el costo del automovil: "
	Leer costo
	precioFinal <- costo + (costo * 0.12) + (costo * 0.06)
	Escribir "El precio para el comprador será de: S/ ",precioFinal
FinAlgoritmo