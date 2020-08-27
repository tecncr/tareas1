Algoritmo DISTRIBUIDORA_DE_ROPA
	
	Definir origen, talla, sexo Como Caracter
	Definir subtotal, pdscto, descuento, montofinal Como Real
	
	Escribir "Programa que determina el monto a pagar por la ropa comprada."
	Escribir Sin Saltar "Ingrese el monto de la compra: S/ "
	Leer subtotal
	
	Repetir
		Escribir "Ingrese el origen de la ropa comprada."
		Escribir "(N para Nacional y P para Particular): "
		Leer origen
		Si origen <> 'n' y origen <> 'N' y origen <> 'p' y origen <> 'P'
			Escribir "El origen ingresado no es valido."
		FinSi
	Mientras Que origen <> 'n' y origen <> 'N' y origen <> 'p' y origen <> 'P'
	
	Repetir
		Escribir "Ingrese el sexo al que está dirigida la ropa comprada."
		Escribir "(H para Hombres y M para Mujeres)"
		Leer sexo
		Si sexo <> 'h' y sexo <> 'H' y sexo <> 'm' y sexo <> 'M'
			Escribir "El sexo ingresado no es valido."
		FinSi
	Mientras Que sexo <> 'h' y sexo <> 'H' y sexo <> 'm' y sexo <> 'M'
	
	Repetir
		Escribir Sin Saltar "Ingrese la talla de la ropa comprada.(S/M/L): "
		Leer talla
		Si talla <> 's' y talla <> 'S' y talla <> 'm' y talla <> 'M' y talla <> 'l' y talla <> 'L'
			Escribir "La talla ingresada no es valida."
		FinSi
	Mientras Que talla <> 's' y talla <> 'S' y talla <> 'm' y talla <> 'M' y talla <> 'l' y talla <> 'L'
	
	Segun origen Hacer
		'n':
			Segun sexo Hacer
				'h':
					Segun talla Hacer
						's': pdscto <- 0.1
						'S': pdscto <- 0.1
						'm': pdscto <- 0.12
						'M': pdscto <- 0.12
						'l': pdscto <- 0.15
						'L': pdscto <- 0.15
					Fin Segun
				'H':
					Segun talla Hacer
						's': pdscto <- 0.1
						'S': pdscto <- 0.1
						'm': pdscto <- 0.12
						'M': pdscto <- 0.12
						'l': pdscto <- 0.15
						'L': pdscto <- 0.15
					Fin Segun					
				'm':
					Segun talla Hacer
						's': pdscto <- 0.15
						'S': pdscto <- 0.15
						'm': pdscto <- 0.17
						'M': pdscto <- 0.17
						'l': pdscto <- 0.2
						'L': pdscto <- 0.2
					Fin Segun
				'M':
					Segun talla Hacer
						's': pdscto <- 0.15
						'S': pdscto <- 0.15
						'm': pdscto <- 0.17
						'M': pdscto <- 0.17
						'l': pdscto <- 0.2
						'L': pdscto <- 0.2
					Fin Segun
			Fin Segun
		'N':
			Segun sexo Hacer
				'h':
					Segun talla Hacer
						's': pdscto <- 0.1
						'S': pdscto <- 0.1
						'm': pdscto <- 0.12
						'M': pdscto <- 0.12
						'l': pdscto <- 0.15
						'L': pdscto <- 0.15
					Fin Segun
				'H':
					Segun talla Hacer
						's': pdscto <- 0.1
						'S': pdscto <- 0.1
						'm': pdscto <- 0.12
						'M': pdscto <- 0.12
						'l': pdscto <- 0.15
						'L': pdscto <- 0.15
					Fin Segun					
				'm':
					Segun talla Hacer
						's': pdscto <- 0.15
						'S': pdscto <- 0.15
						'm': pdscto <- 0.17
						'M': pdscto <- 0.17
						'l': pdscto <- 0.2
						'L': pdscto <- 0.2
					Fin Segun
				'M':
					Segun talla Hacer
						's': pdscto <- 0.15
						'S': pdscto <- 0.15
						'm': pdscto <- 0.17
						'M': pdscto <- 0.17
						'l': pdscto <- 0.2
						'L': pdscto <- 0.2
					Fin Segun
			Fin Segun
		'p':
			Segun sexo Hacer
				'h':
					Segun talla Hacer
						's': pdscto <- 0.05
						'S': pdscto <- 0.05
						'm': pdscto <- 0.07
						'M': pdscto <- 0.07
						'l': pdscto <- 0.1
						'L': pdscto <- 0.1
					Fin Segun
				'H':
					Segun talla Hacer
						's': pdscto <- 0.05
						'S': pdscto <- 0.05
						'm': pdscto <- 0.07
						'M': pdscto <- 0.07
						'l': pdscto <- 0.1
						'L': pdscto <- 0.1
					Fin Segun					
				'm':
					Segun talla Hacer
						's': pdscto <- 0.07
						'S': pdscto <- 0.07
						'm': pdscto <- 0.09
						'M': pdscto <- 0.09
						'l': pdscto <- 0.12
						'L': pdscto <- 0.12
					Fin Segun
				'M':
					Segun talla Hacer
						's': pdscto <- 0.07
						'S': pdscto <- 0.07
						'm': pdscto <- 0.09
						'M': pdscto <- 0.09
						'l': pdscto <- 0.12
						'L': pdscto <- 0.12
					Fin Segun
			Fin Segun
		'P':
			Segun sexo Hacer
				'h':
					Segun talla Hacer
						's': pdscto <- 0.05
						'S': pdscto <- 0.05
						'm': pdscto <- 0.07
						'M': pdscto <- 0.07
						'l': pdscto <- 0.1
						'L': pdscto <- 0.1
					Fin Segun
				'H':
					Segun talla Hacer
						's': pdscto <- 0.05
						'S': pdscto <- 0.05
						'm': pdscto <- 0.07
						'M': pdscto <- 0.07
						'l': pdscto <- 0.1
						'L': pdscto <- 0.1
					Fin Segun					
				'm':
					Segun talla Hacer
						's': pdscto <- 0.07
						'S': pdscto <- 0.07
						'm': pdscto <- 0.09
						'M': pdscto <- 0.09
						'l': pdscto <- 0.12
						'L': pdscto <- 0.12
					Fin Segun
				'M':
					Segun talla Hacer
						's': pdscto <- 0.07
						'S': pdscto <- 0.07
						'm': pdscto <- 0.09
						'M': pdscto <- 0.09
						'l': pdscto <- 0.12
						'L': pdscto <- 0.12
					Fin Segun
			Fin Segun
	Fin Segun
	
	descuento <- subtotal * pdscto
	montofinal <- subtotal - descuento
	
	Escribir "El subtotal es S/ ", subtotal
	Escribir "El cliente es elegible para un descuento del ",pdscto * 100,"%"
	Escribir "Equivalente a  S/ ", descuento
	Escribir "Monto final:   S/ ", montofinal
	
FinAlgoritmo