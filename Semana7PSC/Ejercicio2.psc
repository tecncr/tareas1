Algoritmo NOMBRE_MES
	
	Definir mes Como Entero
	
	Escribir "Programa que indica el nombre de un mes de acuerdo a su numero."
	
	Repetir
		Escribir "Ingrese el numero del mes: "
		Leer mes
		Si mes<1 o mes>12
			Escribir "El numero ingresado no corresponde a ningun mes."
		FinSi
	Mientras Que mes<1 o mes>12
	
	Escribir Sin Saltar "El numero ",mes," corresponde al mes de "
	
	Segun mes Hacer
		1:	Escribir "enero."
		2:	Escribir "febrero."
		3:	Escribir "marzo."
		4:	Escribir "abril."
		5:	Escribir "mayo."
		6:	Escribir "junio."
		7:	Escribir "julio."
		8:	Escribir "agosto."
		9: 	Escribir "setiembre."
		10:	Escribir "octubre."
		11: Escribir "noviembre."
		12: Escribir "diciembre."
	Fin Segun
FinAlgoritmo