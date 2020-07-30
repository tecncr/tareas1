Algoritmo costoAsesoria
	Definir days Como Entero
	Definir hoursAday, totalCost, USDcost, PENcost Como Real
	Escribir "Calculadora de costo total de la asesoria."
	Escribir "Ingrese el numero de dias de asesoria brindada: "
	Leer days
	Escribir "Ingrese el numero de horas por dia: "
	Leer hoursAday
	Mientras hoursAday > 24 Hacer
		Escribir "La cantidad de horas diarias no puede exceder la duracion de un dia."
		Escribir "Ingrese el numero de horas por dia: "
		Leer hoursAday
	FinMientras
	USDcost <- days * hoursAday * 25
	PENcost <- USDcost * 3.52 // Tipo de cambio del 28 de julio del 2020
	Escribir "El costo total de la asesoria es S/ ",PENcost
FinAlgoritmo