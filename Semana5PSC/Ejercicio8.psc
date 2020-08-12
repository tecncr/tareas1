Algoritmo DETERMINAR_INCENTIVO
	
	Definir sBasico, aServicio, incentivoTs, incentivoCondicion, iTotal Como Real
	Definir condicion Como Caracter
	
	Escribir "Programa que calcula el incentivo de un trabajador."
	Escribir Sin Saltar "Ingrese el sueldo basico del trabajador: "
	Leer sBasico
	Escribir Sin Saltar "Ingrese las unidades anuales de tiempo de servicio: "
	Leer aServicio
	
	Repetir
		Escribir  "Ingrese la condicion del trabajador (c para contratado, e para estable): "
		Leer condicion 
		Si condicion <> "c" y condicion <> "e" Entonces
			Escribir "La condicion ingresada no es valida."
		Fin Si
	Hasta Que condicion = "c" o condicion = "e"
	
	Si aServicio <= 3 Entonces
		incentivoTs <- sBasico * 0.05
		Si condicion = "c" Entonces
			incentivoCondicion = 200
		SiNo
			incentivoCondicion = 400
		Fin Si
	SiNo
		incentivoTs <- sBasico * 0.07
		Si condicion = "c" Entonces
			incentivoCondicion = 200
		SiNo
			incentivoCondicion = 400
		Fin Si
	Fin Si
	
	iTotal <- incentivoTs + incentivoCondicion
	
	Escribir "El incentivo por tiempo de servicio es de  S/ ", incentivoTs
	Escribir "El incentivo por condicion es de           S/ ", incentivoCondicion
	Escribir "El incentivo total es de                   S/ ", iTotal
	Escribir "El sueldo total del trabajador es de       S/ ", sBasico + iTotal
	
FinAlgoritmo