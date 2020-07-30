Algoritmo maximoMonedasBilletes
	
	Definir sueldo Como Entero
	
	Dimension valorEfectivo[7]
	valorEfectivo[1] <- 1
	valorEfectivo[2] <- 2
	valorEfectivo[3] <- 5
	valorEfectivo[4] <- 10
	valorEfectivo[5] <- 20
	valorEfectivo[6] <- 50
	valorEfectivo[7] <- 100
	
	Dimension cantidadEfectivo[7]
	
	Escribir "Programa que distribuye un pago en la maxima cantidad posible de monedas y billetes."
	Escribir "Ingrese el pago del trabajador: "
	Leer sueldo
	
	Mientras sueldo < 0
		Escribir "El monto del pago a realizar no puede ser negativo."
		Escribir "Por favor ingrese el pago del trabajador: "
	FinMientras
	
	Mientras  sueldo <> 0
		Para i<-1 Hasta 7 Con Paso 1 Hacer
			Si sueldo - valorEfectivo[i] >= 0 Entonces
				sueldo = sueldo - valorEfectivo[i]
				cantidadEfectivo[i] = cantidadEfectivo[i] + 1
			Fin Si
		Fin Para
	FinMientras
	
	Escribir "Este pago se puede realizar en: "
	Escribir cantidadEfectivo[1]," monedas de ",valorEfectivo[1], " sol."
	Escribir cantidadEfectivo[2]," monedas de ",valorEfectivo[2], " soles."
	Escribir cantidadEfectivo[3]," monedas de ",valorEfectivo[3], " soles."
	Escribir cantidadEfectivo[4]," billetes de ",valorEfectivo[4], " soles."
	Escribir cantidadEfectivo[5]," billetes de ",valorEfectivo[5], " soles."
	Escribir cantidadEfectivo[6]," billetes de ",valorEfectivo[6], " soles."
	Escribir cantidadEfectivo[7]," billetes de ",valorEfectivo[7], " soles."
	
FinAlgoritmo
