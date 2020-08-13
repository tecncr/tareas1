Algoritmo CALCULAR_IMPUESTOS
	
	Definir ingreso, porcImpuestos, impuestos Como Real
	
	Escribir "Programa que calcula el monto de los impuestos por ingresos."
	Escribir Sin Saltar "Escriba el monto de su ingreso: S/ "
	Leer ingreso
	
	Si ingreso < 4000 Entonces
		porcImpuestos = 0
	SiNo
		Si ingreso < 29000 Entonces
			porcImpuestos = 0.15
		SiNo
			Si ingreso <= 70000 Entonces
				porcImpuestos = 0.25
			SiNo
				porcImpuestos = 0.35
			Fin Si
		Fin Si
	Fin Si
	
	impuestos <- ingreso * porcImpuestos
	
	Escribir "Su ingreso esta sujeto a impuestos del " , porcImpuestos * 100 , "%"
	Escribir "Equivalentes a un monto de S/ " , impuestos
	Escribir "Su ingreso despues del pago de los impuestos sera de S/ ", ingreso - impuestos
	
FinAlgoritmo