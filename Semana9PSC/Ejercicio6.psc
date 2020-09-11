Algoritmo DECIMAL_A_BINARIO
	
	Definir dec, x, bin, tmp Como Entero
	
	Escribir "Programa que convierte un número en base 10 a binario."
	
	Repetir
		Escribir Sin Saltar "Ingrese el número que desee convertir: "
		Leer dec
		Si dec < 0
			Escribir "El valor del número a convertir no puede ser negativo."
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que dec < 0
	
	tmp <- dec
	x <- 1
	bin <- 0
	
	//Conversion de decimal a binario mediante "divisiones sucesivas"
	Mientras tmp > 0 Hacer
		Si tmp mod 2 = 1 Entonces
			bin <- bin + x
		FinSi
		tmp <- trunc(tmp/2)
		x <- x*10
	FinMientras
	
	Escribir "El numero ",dec," convertido a binario es: ", bin
	
FinAlgoritmo
