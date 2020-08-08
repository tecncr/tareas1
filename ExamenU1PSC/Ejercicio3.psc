Algoritmo promedioMaxMin
	
	Definir nota1, nota2, nota3, nota4, promedio Como Real
	
	Escribir "Programa que calcula el promedio de cuatro calificaciones"
	Escribir "e indica la maxima y la minima."
	Escribir "Ingrese la primera calificacion: "
	Leer nota1
	Escribir "Ingrese la segunda calificacion: "
	Leer nota2
	Escribir "Ingrese la tercera calificacion: "
	Leer nota3
	Escribir "Ingrese la cuarta calificacion: "
	Leer nota4
	
	promedio <- (nota1 + nota2 + nota3 + nota4) / 4
	Escribir "El promedio del estudiante es: ", promedio
	
	Si nota1<=nota2 y nota1<=nota3 y nota1<=nota4 Entonces
		Escribir "La calificacion minima es: ",nota1
	SiNo
		Si nota2<=nota1 y nota2<=nota3 y nota2<=nota4 Entonces
			Escribir "La calificacion minima es: " nota2
		SiNo
			Si nota3<=nota1 y nota3<=nota2 y nota3<=nota4 Entonces
				Escribir  "La calificacion minima es: ", nota3
			SiNo
					Escribir "La calificacion minima es: ", nota4
			Fin Si
		Fin Si
	Fin Si
	
	Si nota1>=nota2 y nota1>=nota3 y nota1>=nota4 Entonces
		Escribir "La calificacion maxima es: ",nota1
	SiNo
		Si nota2>=nota1 y nota2>=nota3 y nota2>=nota4 Entonces
			Escribir "La calificacion maxima es: " nota2
		SiNo
			Si nota3>=nota1 y nota3>=nota2 y nota3>=nota4 Entonces
				Escribir  "La calificacion maxima es: ", nota3
			SiNo
				Escribir "La calificacion maxima es: ", nota4
			Fin Si
		Fin Si
	Fin Si
	
FinAlgoritmo
