Algoritmo PRECIO_TERRENO
	Definir largo, ancho, precio, area Como Real
	Definir zona Como Caracter
	PRECIO_M2_ZONA_A = 60
	PRECIO_M2_ZONA_B = 55
	PRECIO_M2_ZONA_C = 48
	PRECIO_M2_ZONA_D = 36
	Escribir "Programa que calcula el precio de un terreno."
	Escribir Sin Saltar "Ingrese el largo del terreno en metros:"
	Leer largo
	Escribir Sin Saltar "Ingrese el ancho del terreno en metros:"
	Leer ancho
	
	area <- largo * ancho
	
	Repetir
		Escribir Sin Saltar "Ingrese la zona de la ciudad donde se ubica el terreno (a/b/c/d): "
		Leer zona
		Si zona <> "a" y zona <> "b" y zona <> "c" y zona <> "d"
			Escribir "La zona ingresada es invalida. Solo se admiten los valores a, b, c, d."
		FinSi
	Hasta Que zona = "a" o zona = "b" o zona = "c" o zona = "d"
	
	Si zona = "a" Entonces
		precio <- area * PRECIO_M2_ZONA_A
	SiNo
		Si zona = "b" Entonces
			precio <- area * PRECIO_M2_ZONA_B
		SiNo
			Si zona = "c" Entonces
				precio <- area * PRECIO_M2_ZONA_C
			SiNo
				precio <- area * PRECIO_M2_ZONA_D
			FinSi
		Fin Si
	Fin Si
	
	Escribir "El precio de venta del terreno es: $ ", precio
	
FinAlgoritmo