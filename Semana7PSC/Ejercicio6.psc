// El presente algoritmo se alargó "innecesariamente", no obstante
// esto fue hecho con el fin de aplicar la estructura selectiva múltiple

Algoritmo PUNTAJE_FINAL
	
	Definir original, final, factor Como Real
	Definir letra_factor Como Caracter
	
	Escribir "Programa que calcula el puntaje de un participante."
	
	Repetir
		Escribir "Ingrese el puntaje original (de 0 a 10): "
		Leer original
		Si original<0 o original>10
			Escribir "Puntaje inválido. Este no debe ser negativo ni mayor a 10."
		FinSi
	Mientras Que original<0 o original>10
	
	Si original>=9 Entonces
		letra_factor <- 'a'
	SiNo
		Si original>=6 Entonces
			letra_factor <- 'b'
		SiNo
			Si original>=1 Entonces
				letra_factor <- 'c'
			SiNo
				letra_factor <- 'd'
			Fin Si
		Fin Si
	Fin Si
	
	Segun letra_factor Hacer
		'a': factor <- 10
		'b': factor <- 9
		'c': factor <- 6
		'd': factor <- 0
	FinSegun
	
	final <- original * factor
	
	Escribir "El puntaje final del participante es ",final
	
FinAlgoritmo