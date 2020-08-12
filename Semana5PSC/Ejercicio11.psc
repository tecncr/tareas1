Algoritmo DETERMINAR_SUELDO_NETO
	
	Definir basico, aServicio, porcentIncremento, neto Como Real
	Definir esJefe, tieneTitulo, tienePosgrado Como Caracter
	
	Escribir "Programa que calcula el sueldo neto de un trabajador."
	Escribir Sin Saltar "Ingrese el sueldo basico del trabajador: "
	Leer basico
	Escribir Sin Saltar "Ingrese las unidades anuales de tiempo de servicio: "
	Leer aServicio
	
	Si aServicio >= 1 y aServicio <= 5 Entonces
		porcentIncremento = 0.1
	FinSi
	
	Si aServicio >= 6 Entonces
		porcentIncremento = 0.15
	FinSi
	
	Repetir
		Escribir  "El trabajador es jefe? (si/no): "
		Leer esJefe
		Si esJefe = "si" Entonces
			porcentIncremento = porcentIncremento + 0.1
		FinSi
		Si esJefe <> "si" y esJefe <> "no"
			Escribir "Respuesta no valida, por favor ingrese solo si o no."
		FinSi
	Hasta Que esJefe = "si" o esJefe = "no"
	
	Repetir
		Escribir  "El trabajador tiene titulo universitario? (si/no): "
		Leer tieneTitulo
		Si tieneTitulo = "si" Entonces
			porcentIncremento = porcentIncremento + 0.05
			Repetir
				Escribir  "El trabajador tiene estudios de posgrado? (si/no): "
				Leer tienePosgrado
				Si tienePosgrado = "si" Entonces
					porcentIncremento = porcentIncremento + 0.12
				FinSi
				Si tienePosgrado <> "si" y tienePosgrado <> "no"
					Escribir "Respuesta no valida, por favor ingrese solo si o no."
				FinSi
			Hasta Que tienePosgrado = "si" o tienePosgrado = "no"
		FinSi
		Si tieneTitulo = "no"
			tienePosgrado = "no"
		FinSi
		Si tieneTitulo <> "si" y tieneTitulo <> "no"
			Escribir "Respuesta no valida, por favor ingrese solo si o no."
		FinSi
	Hasta Que tieneTitulo = "si" o tieneTitulo = "no"
	
	incentivo <- basico * porcentIncremento
	neto <- basico + incentivo
	
	Escribir "El incentivo total es de                 S/ ", incentivo
	Escribir "(Equivalente a un ", porcentIncremento * 100, "% del sueldo basico.)"
	Escribir "El sueldo neto del trabajador es de      S/ ", neto
	
FinAlgoritmo