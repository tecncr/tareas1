Algoritmo CONVERTIDOR_A_ROMANOS
	
	Definir num, miles, cientos, decenas, m, c, d, u Como Entero
	
	Escribir "Programa que convierte un numero arabico a numeros romanos."
	
	Repetir
		Escribir "Ingrese un numero entre 1 y 3999: "
		Leer num
		Si num < 1
			Escribir "El numero no debe ser inferior a 1. Por favor intentelo nuevamente."
		FinSi
		Si num > 3999
			Escribir "El numero no debe ser mayor que 3999. Por favor intentelo nuevamente."
		FinSi
	Mientras Que num < 1 o num > 3999
	
	miles <- num - num % 1000
	m <- miles/1000
	cientos <- num - miles - num % 100
	c <- cientos/100
	decenas <- num - miles - cientos - num % 10
	d <- decenas/10
	u <- num % 10
	
	Escribir "La representacion en romanos del numero ",num," es: "
	
	Segun m Hacer
		1: Escribir Sin Saltar 'M'
		2: Escribir Sin Saltar 'MM'
		3: Escribir Sin Saltar 'MMM'
	Fin Segun
	
	Segun c Hacer
		1: Escribir Sin Saltar 'C'
		2: Escribir Sin Saltar 'CC'
		3: Escribir Sin Saltar 'CCC'
		4: Escribir Sin Saltar 'CD'
		5: Escribir Sin Saltar 'D'
		6: Escribir Sin Saltar 'DC'
		7: Escribir Sin Saltar 'DCC'
		8: Escribir Sin Saltar 'DCCC'
		9: Escribir Sin Saltar 'CM'
	Fin Segun
	
	Segun d Hacer
		1: Escribir Sin Saltar 'X'
		2: Escribir Sin Saltar 'XX'
		3: Escribir Sin Saltar 'XXX'
		4: Escribir Sin Saltar 'XL'
		5: Escribir Sin Saltar 'L'
		6: Escribir Sin Saltar 'LX'
		7: Escribir Sin Saltar 'LXX'
		8: Escribir Sin Saltar 'LXXX'
		9: Escribir Sin Saltar 'XC'
	Fin Segun
	
	Segun u Hacer
		1: Escribir Sin Saltar 'I'
		2: Escribir Sin Saltar 'II'
		3: Escribir Sin Saltar 'III'
		4: Escribir Sin Saltar 'IV'
		5: Escribir Sin Saltar 'V'
		6: Escribir Sin Saltar 'VI'
		7: Escribir Sin Saltar 'VII'
		8: Escribir Sin Saltar 'VIII'
		9: Escribir Sin Saltar 'IX'
	Fin Segun
	
	Escribir ''
	
FinAlgoritmo