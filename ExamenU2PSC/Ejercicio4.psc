Funcion frmt <- obtener_formato()
	Definir frmt Como Caracter
	Repetir
		Escribir "Ingrese el formato de la hora (a para 12 horas AM/PM y b para 24 horas)."
		Escribir Sin Saltar "Formato: "
		Leer frmt
		Si frmt <> 'a' y frmt <> 'b' y frmt <> 'A' y frmt <> 'B'
			Escribir ""
			Escribir "Formato de hora invalido."
			Escribir "Por favor ingrese solamente la letra a o la letra b"
			Escribir ""
		FinSi
	Mientras Que frmt <> 'a' y frmt <> 'b' y frmt <> 'A' y frmt <> 'B'
FinFuncion


Funcion amopm <- am_o_pm()
	Definir amopm Como Caracter
	Repetir
		Escribir "AM o PM? (Ingrese a para AM y p para PM.): "
		Escribir Sin Saltar "Respuesta: "
		Leer amopm
		Si amopm <> 'a' y amopm <> 'p' y amopm <> 'A' y amopm <> 'P'
			Escribir ""
			Escribir "Por favor ingrese solamente la letra a o la letra p"
			Escribir ""
		FinSi
	Mientras Que  amopm <> 'a' y amopm <> 'p' y amopm <> 'A' y amopm <> 'P'
FinFuncion


Funcion num <- iv(max, var_name)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese el valor de ",var_name
		Leer num
		Si num > max
			Escribir "El valor de ",var_name," debe ser como máximo ",max
			Si max = 12
				Escribir "(hora en formato 12 horas)"
			FinSi
			Si max = 24
				Escribir "(hora en formato 24 horas)"
			FinSi
			Escribir "Intentelo nuevamente."
		FinSi
		Si num < 0
			Escribir "El valor de ",var_name," no puede ser negativo."
			Escribir "Intentelo nuevamente."
		FinSi
		Si max = 12 y num < 1
			Escribir "No se permite el valor 0 horas en formato horario 12 horas."
			Escribir "Intentelo nuevamente."
			num <- 25 //Para causar repeticion del bucle
		FinSi
	Mientras Que num > max o num < 0
Fin Funcion


Funcion agr_cero_si_m10(num)
	Si num < 10
		Escribir Sin Saltar "0",num
	SiNo
		Escribir Sin Saltar num
	FinSi
FinFuncion


Algoritmo HORA_30_SEGUNDOS_DESPUES
	
	Definir h,m,s,h30,m30,s30 Como Entero
	Definir formato, ampm Como Caracter
	
	Escribir "Programa que calcula la hora 30 segundos adelantada."
	formato <- obtener_formato()
	Escribir "Por favor ingrese la hora actual."
	
	Si formato = 'a' o formato = 'A'
		h <- iv(12, "las horas")
	SiNo
		h <- iv(24, "las horas")
	FinSi
	
	m <- iv(59, "los minutos")
	s <- iv(59, "los segundos")
	
	Si formato = 'a' o formato = 'A'
		ampm <- am_o_pm()
	FinSi
	
	h30 <- h
	m30 <- m
	s30 <- s+30
	
	Si s30 >= 60
		m30 <- m30+1
		s30 <- s30-60
	FinSi
	
	Si m30 >= 60
		h30 <- h30+1
		m30 <- m30-60
	FinSi
	
	Si formato = 'a' o formato = 'A'
		Si h30 > 12
			h30 <- 1
		FinSi
	SiNo
		Si h30 > 23
			h30 <- 0
		FinSi
	FinSi
	
	//Cambio de AM/PM a las 11
	Si h = 11 y h30 = 12
		Si ampm = 'a'
			ampm <- 'p'
		SiNo
			ampm <- 'a'
		FinSi
	FinSi
	
	Escribir Sin Saltar "La hora adelantada 30 segundos es "
	agr_cero_si_m10(h30); Escribir Sin Saltar ":"
	agr_cero_si_m10(m30); Escribir Sin Saltar ":"
	agr_cero_si_m10(s30)
	
	Si formato = 'a' o formato = 'A'
		Si ampm = 'a'
			Escribir " AM'
		SiNo
			Escribir " PM"
		FinSi
	FinSi
	
	Escribir "" //Salto de Linea Final
	
FinAlgoritmo