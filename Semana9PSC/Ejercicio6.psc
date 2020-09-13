Funcion num <- ingresar_validar_positivo
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor que desee convertir: "
		Leer num
		Si num < 0
			Escribir "El valor ingresado no puede ser negativo."
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que num < 0
FinFuncion


Funcion bin <- convertir_a_binario(dec)
	Definir tmp, x, bin Como Entero
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
FinFuncion
	
	
Algoritmo DECIMAL_A_BINARIO
	Definir decimal, binario Como Entero
	Escribir "Programa que convierte un número en base 10 a binario."
	decimal <- ingresar_validar_positivo()
	binario <- convertir_a_binario(decimal)
	Escribir "El numero ",decimal," convertido a binario es: ",binario
FinAlgoritmo
