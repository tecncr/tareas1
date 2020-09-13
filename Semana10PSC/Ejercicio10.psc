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
			Escribir "Inténtelo nuevamente."
		FinSi
		Si num < 0
			Escribir "El valor de ",var_name," no puede ser negativo."
			Escribir "Inténtelo nuevamente."
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
	
	Escribir "Programa que calcula la hora 30 segundos adelantada."
	Escribir "Por favor ingrese la hora actual (en formato 12 horas)"
	h <- iv(12, "las horas")
	m <- iv(59, "los minutos")
	s <- iv(59, "los segundos")
	
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
	
	Si h30 > 12
		h30 <- 1
	FinSi
	
	Escribir Sin Saltar "La hora adelantada 30 segundos es "
	agr_cero_si_m10(h30); Escribir Sin Saltar ":"
	agr_cero_si_m10(m30); Escribir Sin Saltar ":"
	agr_cero_si_m10(s30); Escribir ""
	
FinAlgoritmo
