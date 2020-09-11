Funcion num <- ingresar_validar_positivo
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el número binario que desee convertir: "
		Leer num
		Si num < 0
			Escribir "El número ingresado no puede ser negativo."
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que num < 0
FinFuncion

Funcion binario <- ingresar_validar_bin
	Definir in, tmp, u_cifra, binario como Entero
	in <- ingresar_validar_positivo()
	tmp <- in
	Mientras tmp > 0
		//Verificacion de digitos binarios
		u_cifra <- tmp%10
		tmp <- trunc(tmp/10)
		Si u_cifra > 1 Entonces
			Escribir "El número ingresado contiene dígitos no binarios."
			Escribir "Inténtelo nuevamente."
			in <- ingresar_validar_positivo()
			tmp <- in
		FinSi
	FinMientras
	binario <- in
Fin Funcion


Algoritmo DECIMAL_A_BINARIO
	
	Definir dec, x, bin, tmp, u Como Entero
	
	bin <- ingresar_validar_bin()
	tmp <- bin
	
	x <- 1
	dec <- 0
	
	//Conversion de binario a decimal mediante "divisiones sucesivas inversas"
	Mientras bin > 0 Hacer
		u <- bin%10
		bin <- trunc(bin/10)
		dec <- dec + (u*x)
		x <- 2*x
	FinMientras
	
	Escribir ""
	Escribir "El numero binario ",tmp," convertido a decimal es: ",dec
	
FinAlgoritmo
