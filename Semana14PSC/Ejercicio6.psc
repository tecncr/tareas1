Funcion cadena_convertida <- convertir_a_mayusculas(cadena_caracteres)
	cadena_convertida <- Mayusculas(cadena_caracteres)
FinFuncion

Funcion cadena_convertida <- convertir_a_minusculas(cadena_caracteres)
	cadena_convertida <- Minusculas(cadena_caracteres)
FinFuncion

Algoritmo MAYUSCULAS_MINUSCULAS
	Definir opc Como Caracter
	Definir c Como Texto
	
	Escribir "Programa que convierte una cadena de caracteres a mayusculas o minusculas"
	Escribir "Ingrese la cadena de caracteres: "
	Leer c
	
	Repetir
		Escribir "Ingrese A si desea convertir la cadena a mayusculas"
		Escribir "o B si desea convertirla a minusculas."
		Escribir Sin Saltar "Su opcion: "
		Leer opc
		Si opc<>'A' y opc<>'B' y opc<>'a' y opc<>'b'
			Escribir ""
			Escribir "La opcion ingresada no es valida."
			Escribir ""
		FinSi
	Mientras Que opc<>'A' y opc<>'B' y opc<>'a' y opc<>'b'
	
	Segun opc Hacer
		'A': c <- convertir_a_mayusculas(c)
		'B': c <- convertir_a_minusculas(c)
		'a': c <- convertir_a_mayusculas(c)
		'b': c <- convertir_a_minusculas(c)
	Fin Segun
	
	Escribir ""
	Escribir "La cadena convertida es:"
	Escribir c
FinAlgoritmo
