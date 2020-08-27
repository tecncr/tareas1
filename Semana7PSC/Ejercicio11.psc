Algoritmo DISTRIBUIDORA_DE_ROPA
	
	Definir nombre Como Texto
	Definir nacionalidad, cantidad Como Entero
	Definir talla, sexo Como Caracter
	Definir preciou, subtotal, pdscto, descuento, montofinal Como Real
	
	Escribir "Programa que determina el monto a pagar por los productos comprados."
	Escribir "Ingrese el nombre del comprador:"
	Leer nombre
	Escribir Sin Saltar "Ingrese el precio unitario de los elementos comprados: S/ "
	Leer preciou
	Escribir Sin Saltar "Ingrese la cantidad de elementos comprados: "
	Leer cantidad
	
	Repetir
		Escribir Sin Saltar "Ingrese la nacionalidad del cliente. (1 o 2): "
		Leer nacionalidad
		Si nacionalidad <> 1 y nacionalidad <> 2
			Escribir "El nacionalidad ingresado no es valido."
		FinSi
	Mientras Que nacionalidad <> 1 y nacionalidad <> 2
	
	Repetir
		Escribir "Ingrese el sexo al que está dirigida la ropa comprada."
		Escribir "(H para Hombres y M para Mujeres)"
		Leer sexo
		Si sexo <> 'h' y sexo <> 'H' y sexo <> 'm' y sexo <> 'M'
			Escribir "El sexo ingresado no es valido."
		FinSi
	Mientras Que sexo <> 'h' y sexo <> 'H' y sexo <> 'm' y sexo <> 'M'
	
	Repetir
		Escribir "Ingrese la talla de la ropa comprada."
		Escribir "N para Niño"
		Escribir "J para Joven."
		Escribir "A para Adulto."
		Escribir Sin Saltar "Opcion: "
		Leer talla
		Si talla <> 'n' y talla <> 'n' y talla <> 'j' y talla <> 'j' y talla <> 'a' y talla <> 'a'
			Escribir "La talla ingresada no es valida."
		FinSi
	Mientras Que talla <> 'n' y talla <> 'n' y talla <> 'j' y talla <> 'j' y talla <> 'a' y talla <> 'a'
	
	Segun nacionalidad Hacer
		1:
			Segun sexo Hacer
				'h':
					Segun talla Hacer
						'n': pdscto <- 0.05
						'N': pdscto <- 0.05
						'j': pdscto <- 0.07
						'J': pdscto <- 0.07
						'a': pdscto <- 0.1
						'A': pdscto <- 0.1
					Fin Segun
				'H':
					Segun talla Hacer
						'n': pdscto <- 0.05
						'N': pdscto <- 0.05
						'j': pdscto <- 0.07
						'J': pdscto <- 0.07
						'a': pdscto <- 0.1
						'A': pdscto <- 0.1
					Fin Segun					
				'm':
					Segun talla Hacer
						'n': pdscto <- 0.06
						'N': pdscto <- 0.06
						'j': pdscto <- 0.09
						'J': pdscto <- 0.09
						'a': pdscto <- 0.12
						'A': pdscto <- 0.12
					Fin Segun
				'M':
					Segun talla Hacer
						'n': pdscto <- 0.06
						'N': pdscto <- 0.06
						'j': pdscto <- 0.09
						'J': pdscto <- 0.09
						'a': pdscto <- 0.12
						'A': pdscto <- 0.12
					Fin Segun
			Fin Segun
		2:
			Segun sexo Hacer
				'h':
					Segun talla Hacer
						'n': pdscto <- 0.04
						'N': pdscto <- 0.04
						'j': pdscto <- 0.05
						'J': pdscto <- 0.05
						'a': pdscto <- 0.09
						'A': pdscto <- 0.09
					Fin Segun
				'H':
					Segun talla Hacer
						'n': pdscto <- 0.04
						'N': pdscto <- 0.04
						'j': pdscto <- 0.05
						'J': pdscto <- 0.05
						'a': pdscto <- 0.09
						'A': pdscto <- 0.09
					Fin Segun					
				'm':
					Segun talla Hacer
						'n': pdscto <- 0.03
						'N': pdscto <- 0.03
						'j': pdscto <- 0.06
						'J': pdscto <- 0.06
						'a': pdscto <- 0.1
						'A': pdscto <- 0.1
					Fin Segun
				'M':
					Segun talla Hacer
						'n': pdscto <- 0.03
						'N': pdscto <- 0.03
						'j': pdscto <- 0.06
						'J': pdscto <- 0.06
						'a': pdscto <- 0.1
						'A': pdscto <- 0.1
					Fin Segun
			Fin Segun
	Fin Segun
	
	subtotal <- preciou * cantidad
	descuento <- subtotal * pdscto
	montofinal <- subtotal - descuento
	
	Escribir "El subtotal es S/ ", subtotal
	Escribir "El cliente ", nombre," es elegible para un descuento del ",pdscto * 100,"%"
	Escribir "Equivalente a  S/ ", descuento
	Escribir "Monto final:   S/ ", montofinal
	
FinAlgoritmo