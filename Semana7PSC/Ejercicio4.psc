Funcion valor <- leer_carta(orden)	
	
	Definir carta Como Caracter
	Definir valor Como Entero
	Definir condiciones1, condiciones2, condiciones3 Como Logico
	
	Repetir
		
		Escribir "Ingrese la ",orden," carta: "
		Leer carta
		
		Si carta<>'1'y carta<>'2' y carta<>'3' y carta<>'4' y carta<>'5' y carta<>'6'
			condiciones1 <- Falso
		SiNo condiciones1 <- Verdadero
		FinSi
		Si carta<>'7' y carta<>'8' y carta<>'9' y carta<>'x' y carta<>'X' y carta<>'a' 
			condiciones2 <- Falso
		SiNo condiciones2 <- Verdadero
		FinSi
		Si carta<>'A' y carta<>'J' y carta<>'Q' y carta<>'K' y carta<>'j' y carta<>'q' y carta<>'k'
			condiciones3 <- Falso
		SiNo condiciones3 <- Verdadero
		FinSi
			
		Si condiciones1 = Falso y condiciones2 = Falso y condiciones3 = Falso
			Escribir "El valor de la carta ingresado es inválido. "
			Escribir "Por favor ingrese valores numéricos entre 1 y 9, también"
			Escribir "puede ingresar A para el as, X (para el 10), J, Q o K."
		FinSi
	Mientras Que condiciones1 = Falso y condiciones2 = Falso y condiciones3 = Falso
	
	Segun carta
		'a': valor <- 1
		'A': valor <- 1
		'1': valor <- 1
		'2': valor <- 2
		'3': valor <- 3
		'4': valor <- 4
		'5': valor <- 5
		'6': valor <- 6
		'7': valor <- 7
		'8': valor <- 8
		'9': valor <- 9
		'x': valor <- 10
		'X': valor <- 10
		'j': valor <- 11
		'J': valor <- 11
		'q': valor <- 12
		'Q': valor <- 12
		'k': valor <- 13
		'K': valor <- 13
	FinSegun
	
Fin Funcion


Algoritmo SUMAR_CARTAS_BARAJA
	
	Definir valor1, valor2 Como Entero
	
	
	Escribir "Programa que suma dos cartas de la baraja."
	
	valor1 <- leer_carta("primera")
	valor2 <- leer_carta("segunda")
	
	Escribir "La suma de las dos cartas es ",valor1+valor2
	
FinAlgoritmo