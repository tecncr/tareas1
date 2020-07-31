Algoritmo Gasolinera
	Definir galonesDespachados, precioGasolina, cobrarACliente, litrosDespachados Como Real
	Escribir "Programa que calcula lo que se le debe cobrar al cliente por la gasolina."
	Escribir "Ingrese los galones despachados."
	Leer galonesDespachados
	Escribir "Ingrese el precio por litro"
	Leer precioGasolina
	litrosDespachados <- galonesDespachados/0.2642
	cobrarACliente <- precioGasolina * litrosDespachados
	Escribir "El monto de lo despachado al cliente es: ",cobrarACliente
FinAlgoritmo