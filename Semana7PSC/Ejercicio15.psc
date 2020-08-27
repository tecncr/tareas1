Algoritmo PESO_EN_SISTEMA_PLANETARIO_SOLAR
	
	Definir nueva_gravedad, peso_tierra, peso_lugar Como Real
	Definir seleccion1, seleccion2 Como Caracter
	Definir condicion1, condicion2 Como Logico
	Definir lugar_seleccionado Como Texto
	
	Escribir "Programa que calcula su peso en otro lugar del sistema solar."
	Escribir "Ingrese su peso en la tierra: "
	Leer peso_tierra
	
	Repetir

		Escribir "Seleccione el lugar del sistema solar en el que le gustaría conocer su peso."
		Escribir "Lugares disponibles: Sol, Luna, Saturno, Mercurio, Marte, Urano, Venus,"
		Escribir Sin Saltar "Jupiter, Neptuno. Ingrese la primera letra del lugar seleccionado: "
		Leer seleccion1
		
		Segun seleccion1 Hacer
			's':
				Repetir
					Escribir "Se ha detectado una ambiguedad."
					Escribir "Para indicar si se refiere al Sol o a Saturno, por favor indique"
					Escribir Sin Saltar "la segunda letra del lugar donde desee conocer su peso (o/a): "
					Leer seleccion2
					Segun seleccion2 Hacer
						'o': nueva_gravedad <- 27.94
							 lugar_seleccionado <- "Sol"
						'a': nueva_gravedad <- 1.15
							 lugar_seleccionado <- "Saturno"
						'O': nueva_gravedad <- 27.94
							 lugar_seleccionado <- "Sol"
						'A': nueva_gravedad <- 1.15
							 lugar_seleccionado <- "Saturno"
						De Otro Modo:
							Escribir "La opcion ingresada es invalida. Solo se admiten los valores o, a."
					Fin Segun
				Mientras Que seleccion2 <> 'o' y seleccion2 <> 'a' y seleccion2 <> 'O' y seleccion2 <> 'A'
			'm':
				Repetir
					Escribir "Se ha detectado una ambiguedad."
					Escribir "Para indicar si se refiere a Marte o a Mercurio, por favor indique"
					Escribir Sin Saltar "la segunda letra del lugar donde desee conocer su peso (a/e): "
					Leer seleccion2
					Segun seleccion2 Hacer
						'a': nueva_gravedad <- 0.38
							lugar_seleccionado <- "Marte"
						'e': nueva_gravedad <- 0.37
							lugar_seleccionado <- "Mercurio"
						'A': nueva_gravedad <- 0.38
							lugar_seleccionado <- "Marte"
						'E': nueva_gravedad <- 0.37
							lugar_seleccionado <- "Mercurio"
						De Otro Modo:
							Escribir "La opcion ingresada es invalida. Solo se admiten los valores a, e."
					Fin Segun
				Mientras Que seleccion2 <> 'o' y seleccion2 <> 'a' y seleccion2 <> 'O' y seleccion2 <> 'A'
			'l': nueva_gravedad <- 0.17
				 lugar_seleccionado <- "Luna"
			'u': nueva_gravedad <- 1.17
				 lugar_seleccionado <- "Urano"
			'v': nueva_gravedad <- 0.88
				 lugar_seleccionado <- "Venus"
			'j': nueva_gravedad <- 2.64
				 lugar_seleccionado <- "Jupiter"
			'n': nueva_gravedad <- 1.18
				lugar_seleccionado <- "Neptuno"
			'S':
				Repetir
					Escribir "Se ha detectado una ambiguedad."
					Escribir "Para indicar si se refiere al Sol o a Saturno, por favor indique"
					Escribir Sin Saltar "la segunda letra del lugar donde desee conocer su peso (o/a): "
					Leer seleccion2
					Segun seleccion2 Hacer
						'o': nueva_gravedad <- 27.94
							lugar_seleccionado <- "Sol"
						'a': nueva_gravedad <- 1.15
							lugar_seleccionado <- "Saturno"
						'O': nueva_gravedad <- 27.94
							lugar_seleccionado <- "Sol"
						'A': nueva_gravedad <- 1.15
							lugar_seleccionado <- "Saturno"
						De Otro Modo:
							Escribir "La opcion ingresada es invalida. Solo se admiten los valores o, a."
					Fin Segun
				Mientras Que seleccion2 <> 'o' y seleccion2 <> 'a' y seleccion2 <> 'O' y seleccion2 <> 'A'
			'M':
				Repetir
					Escribir "Se ha detectado una ambiguedad."
					Escribir "Para indicar si se refiere a Marte o a Mercurio, por favor indique"
					Escribir Sin Saltar "la segunda letra del lugar donde desee conocer su peso (a/e): "
					Leer seleccion2
					Segun seleccion2 Hacer
						'a': nueva_gravedad <- 0.38
							lugar_seleccionado <- "Marte"
						'e': nueva_gravedad <- 0.37
							lugar_seleccionado <- "Mercurio"
						'A': nueva_gravedad <- 0.38
							lugar_seleccionado <- "Marte"
						'E': nueva_gravedad <- 0.37
							lugar_seleccionado <- "Mercurio"
						De Otro Modo:
							Escribir "La opcion ingresada es invalida. Solo se admiten los valores a, e."
					Fin Segun
				Mientras Que seleccion2 <> 'o' y seleccion2 <> 'a' y seleccion2 <> 'O' y seleccion2 <> 'A'
			'L': nueva_gravedad <- 0.17
				lugar_seleccionado <- "Luna"
			'U': nueva_gravedad <- 1.17
				lugar_seleccionado <- "Urano"
			'V': nueva_gravedad <- 0.88
				lugar_seleccionado <- "Venus"
			'J': nueva_gravedad <- 2.64
				lugar_seleccionado <- "Jupiter"
			'N': nueva_gravedad <- 1.18
				lugar_seleccionado <- "Neptuno"
			De Otro Modo:
				Escribir "La opcion ingresada es invalida. Por favor intentelo nuevamente."
		Fin Segun
		
		condicion1 <- seleccion1 <> 's' y seleccion1 <> 'l' y seleccion1 <> 'm' y seleccion1 <> 'u' y seleccion1 <> 'v' y seleccion1 <> 'j' y seleccion1 <> 'n'
		condicion2 <- seleccion1 <> 'S' y seleccion1 <> 'L' y seleccion1 <> 'M' y seleccion1 <> 'U' y seleccion1 <> 'V' y seleccion1 <> 'J' y seleccion1 <> 'N'
		
	Mientras Que condicion1 y condicion2
	
	peso_lugar <- peso_tierra * nueva_gravedad
	
	Escribir ""
	Escribir "Su peso en ",lugar_seleccionado," es: ",peso_lugar
	
FinAlgoritmo