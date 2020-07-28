Algoritmo DaysAlive
	Definir age, currentMonth, currentDay, daysFromYears, daysFromMonths, totalDays Como Entero
	Definir currentMonthIsValid, currentDayIsValid Como Logico
	
	Escribir "Programa para calcular los dias aproximados que una persona lleva viva"
	Escribir "Ingrese su edad: "
	Leer age
	
	Mientras age < 0 Hacer
		Escribir "Su edad no puede ser negativa. Por favor ingrese una edad válida: "
		Leer age
	FinMientras
	
	Escribir  "Ingrese el número del mes actual: "
	Leer currentMonth
	
	Si currentMonth < 0 Entonces
		currentMonthIsValid <- Falso
	SiNo
		Si inputMonth > 12 Entonces
			currentMonthIsValid <- Falso
		SiNo
			currentMonthIsValid <- Verdadero
		Fin Si
	Fin Si
	
	Mientras currentMonthIsValid = Falso Hacer
		Escribir "El mes ingresado es invalido, por favor ingrese un mes valido (entre 1 y 12): "
		Leer currentMonth
		Si currentMonth < 0 Entonces
			currentMonthIsValid <- Falso
		SiNo
			Si inputMonth > 12 Entonces
				currentMonthIsValid <- Falso
			SiNo
				currentMonthIsValid <- Verdadero
			Fin Si
		Fin Si
	FinMientras
	
	Escribir "Ingrese el dia del mes actual: "
	Leer currentDay
	
	Si currentDay < 0 Entonces
		currentDayIsValid <- Falso
	SiNo
		Si currentDay > 31 Entonces
			currentDayIsValid <- Falso
		SiNo
			currentDayIsValid <- Verdadero
		Fin Si
	Fin Si
	
	Mientras currentDayIsValid = Falso Hacer
		Escribir "El día ingresado es invalido, por favor ingrese un dia valido (entre 1 y 31): "
		Leer currentDay
		Si currentDay < 0 Entonces
		currentDayIsValid <- Falso
	SiNo
		Si currentDay > 31 Entonces
			currentDayIsValid <- Falso
		SiNo
			currentDayIsValid <- Verdadero
		Fin Si
	Fin Si
	FinMientras
	
	daysFromYears <- 365 * age
	daysFromMonths <- currentDay + (currentMonth * 30)
	totalDays <- daysFromYears + daysFromMonths
	Escribir "Usted ha vivido ",totalDays," días aproximadamente."
	
FinAlgoritmo