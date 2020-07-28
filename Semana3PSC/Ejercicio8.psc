Algoritmo gbAbits
	Definir gb, mb, kb, bytes, bits Como Real
	Escribir "Programa que calcula la capacidad en bits de un dispositivo."
	Escribir "Ingrese la capacidad del dispositivo en gigabytes: "
	Leer gb
	mb = 1024 * gb
	kb = 1024 * mb
	bytes = 1024 * kb
	bits = 8 * bytes
	Escribir gb," gigabytes equivale a ", bits, " bits."
FinAlgoritmo