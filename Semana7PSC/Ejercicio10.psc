Algoritmo FINANCIAMIENTO
	
	Definir montobase, monto_masimpuestos, nuevomonto, p_interes, p_inicial, impuestos, intereses, inicial, cadaletra Como Real
	Definir tipofin, num_letras Como Entero
	
	Escribir "Programa que calcula los montos a pagar de una compra financiada."
	Escribir Sin Saltar "Ingrese el monto de la compra: S/ "
	Leer montobase
	Repetir
		Escribir "Ingrese el tipo de financiamiento (1/2/3): "
		Leer tipofin
		Si tipofin <> 1 y tipofin <> 2 y tipofin <> 3
			Escribir "El tipo de financiamiento ingresado no es válido."
			Escribir "Se admiten solo los valores: 1, 2, 3."
		FinSi
	Mientras Que tipofin <> 1 y tipofin <> 2 y tipofin <> 3
	
	Segun tipofin Hacer
		1:
			p_interes <- 0.05
			p_inicial <- 0.6
			num_letras <- 2
		2:
			p_interes <- 0.1
			p_inicial <- 0.5
			num_letras <- 4
		3:
			p_interes <- 0.15
			p_inicial <- 0.35
			num_letras <- 6
	Fin Segun
	
	impuestos <- montobase * 0.1
	monto_masimpuestos <- montobase + impuestos
	intereses <- monto_masimpuestos * p_interes
	nuevomonto <- monto_masimpuestos + intereses
	inicial <- nuevomonto * p_inicial
	cadaletra <- (nuevomonto - inicial)/num_letras
	
	Escribir "*********** INFORMACION SOBRE LA COMPRA FINANCIADA ***********"
	Escribir "El monto base de la compra es:                    S/ ",montobase
	Escribir "Está sujeto a impuestos del 10% que equivalen a   S/ ", impuestos
	Escribir "El monto de la factura tras impuestos es:         S/ ", monto_masimpuestos
	Escribir "La tasa de interés para este financiamiento es del   ",p_interes * 100,"%"
	Escribir "Los intereses totales son equivalentes a          S/ ",intereses
	Escribir "El monto de la factura tras intereses es:         S/ ", nuevomonto
	Escribir "La cuota inicial es del ",p_inicial * 100,"%"
	Escribir "El monto de la cuota inicial es                   S/ ",  inicial
	Escribir "Esta compra será pagada en ",num_letras," letras de            S/ ", cadaletra
	
FinAlgoritmo