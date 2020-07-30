Algoritmo salarioSemana
	Definir horasTrabajadas, pagoParcial, descuentoAFP, pagoFinal como Real
	Escribir "Programa para calcular el salario final semanal de un trabajador."
	Escribir "Ingrese la cantidad de horas trabajadas: "
	Leer horasTrabajadas
	pagoParcial <- (35 * horasTrabajadas)
	descuentoAFP <- pagoParcial * 0.05
	pagoFinal <- pagoParcial - descuentoAFP
	Escribir "Su salario final será de S/ ",pagoFinal
FinAlgoritmo
