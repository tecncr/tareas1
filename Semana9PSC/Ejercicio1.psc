Algoritmo PRIMOS_3_DIGITOS
	
	Definir a, b, num_div_prop, np_linea Como Entero
	
	Escribir "Programa que calcula todos los números primos de 3 dígitos."
	Escribir "Los resultados son:"
	
	np_linea <- 0
	
	Para a <- 100 Hasta 999 Con Paso 1 Hacer
		num_div_prop <- 0
		Para b <- 1 Hasta trunc(a/2)+1 Con Paso 1 Hacer
			//Trabajando con divisores propios para reducir consumo de recursos
			Si a MOD b = 0
				num_div_prop <- num_div_prop + 1
			FinSi
		Fin Para
		Si num_div_prop = 1
			Escribir Sin Saltar a, ", "
			//Insertando salto de linea cada 12 números
			//para una correcta visualización
			np_linea <- np_linea + 1
			Si np_linea = 12
				Escribir ""
				np_linea <- 0
			FinSi
		FinSi
	Fin Para
	
	Escribir "fin."
	
FinAlgoritmo
