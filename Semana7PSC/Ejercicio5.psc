Algoritmo PRECIO_DISKETTES
	
	Definir preciounitario, bruto, descuento, total Como Real
	Definir cantidad Como Entero
	Definir marca Como Caracter
	
	Escribir "Programa que calcula el precio a pagar por diskettes."
	
	Escribir "Ingrese el precio unitario del diskette: "
	Leer preciounitario
	Escribir "Ingrese la cantidad de diskettes vendidos: "
	Leer cantidad
	
	bruto <- preciounitario * cantidad
	
	Repetir
		Escribir "Seleccione la marca del diskette."
		Escribir "Ingrese a si la marca es 3M."
		Escribir "Ingrese b si la marca es NCR."
		Escribir "Ingrese c si la marca es Sentinel."
		Escribir "Ingrese d si la marca es Burroughs."
		Escribir "Ingrese e si la marca es GoldStar."
		Escribir "Escriba la opcion correspondiente a la marca: "
		Leer marca
		Si marca <> 'a' y marca <> 'b' y marca <> 'c' y marca <> 'd' y marca <> 'e'
			Escribir "La opcion ingresada es invalida."
		FinSi
	Mientras Que marca <> 'a' y marca <> 'b' y marca <> 'c' y marca <> 'd' y marca <> 'e'
	
	Segun marca Hacer
		'a': descuento <- preciounitario * cantidad * 0.1
		'b': descuento <- preciounitario * cantidad * 0.15
		'c': descuento <- preciounitario * cantidad * 0.2
		'd': descuento <- preciounitario * cantidad * 0.25
		'e': descuento <- preciounitario * cantidad * 0.3
	Fin Segun
	
	total <- bruto - descuento
	
	Escribir "El importe bruto es           S/ ", bruto
	Escribir "El descuento sera de          S/ ",descuento
	Escribir "El monto total a pagar sera   S/ ",total
	
FinAlgoritmo