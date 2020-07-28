Algoritmo CajaRegistradora1
	Definir cantidad, precioUnitario, efectivo, vuelto Como Real
	Escribir "Registro de venta."
 	Escribir "Ingrese el precio unitario del producto que se esta vendiendo:"
	Leer precioUnitario
	Escribir "Ingrese la cantidad de unidades de dicho producto: "
	Leer cantidad
	Escribir "Ingrese la cantidad de efectivo dado por el cliente."
	Leer efectivo
	vuelto <- efectivo - (cantidad * precioUnitario)
	Si vuelto < 0 Entonces
		Escribir  "El efectivo dado por el cliente es insuficiente."
	SiNo
		Escribir "El vuelto a entregar al cliente es: S/ ",vuelto
	Fin Si
FinAlgoritmo