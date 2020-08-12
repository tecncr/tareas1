Algoritmo calculadora
	
	Definir entrada1, entrada2 Como Real
	Definir operador Como Caracter
	
	Escribir "Programa que calcula el resultado de una operacion entre dos numeros."
	Escribir "Ingrese el primer numero: "
	Leer entrada1
	Escribir "Ingrese el segundo numero: "
	Leer entrada2
	Escribir "Ingrese el operador de la operacion a realizar con los numeros ingresados: "
	Leer operador
	
	Mientras operador <> "+" y operador <> "-" y operador <> "*" y operador <> "/" Hacer
		Escribir "El operador ingresado no es valido."
		Escribir "Por favor ingrese el operador de la operacion a realizar: "
		Leer operador
	FinMientras
	
	Si operador = "+" Entonces
		Escribir "El resultado de la suma es: " , entrada1+entrada2
	FinSi
	Si operador = "-" Entonces
		Escribir "El resultado de la resta es: " , entrada1-entrada2
	FinSi
	Si operador = "*" Entonces
		Escribir "El resultado de la multiplicacion es: " , entrada1*entrada2
	FinSi
	Si operador = "/" Entonces
		Escribir "El resultado de la division es: " , entrada1/entrada2
	Fin Si
	
FinAlgoritmo