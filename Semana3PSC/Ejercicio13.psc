Algoritmo librasPies_kilosMetros
	Definir pounds, feet, kg, m Como Real 
	Escribir "Programa que convierte medidas del sistema anglosajon al sistema internacional."
	Escribir "Ingrese el peso del elefante en libras: "
	Leer pounds
	Mientras pounds < 0 Hacer
		Escribir "El peso no puede ser negativo."
		Escribir "Por favor ingrese el peso del elefante en libras: "
		Leer pounds
	FinMientras
		
	Escribir "Ingrese la altura del elefante en pies: "
	Leer feet
	Mientras feet < 0 Hacer
		Escribir "La altura no puede ser negativa."
		Escribir "Por favor ingrese la altura del elefante en pies: "
		Leer feet
	Fin Mientras
	
	kg <- pounds / 2.2046
	m <- feet / 3.2808
	
	Escribir "El elefante pesa: ",kg, " kilogramos y mide ",m," metros."	
FinAlgoritmo