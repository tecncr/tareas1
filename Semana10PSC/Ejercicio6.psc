Funcion num <- ingresar_validar(var_name, max, min)
	Definir num Como Entero
	Repetir
		Escribir Sin Saltar "Ingrese ",var_name,": "
		Leer num
		Si num > max
			Escribir var_name," no puede ser mayor que ",max
			Escribir "Inténtelo nuevamente."
		FinSi
		Si num < min
			Si min = 0
				Escribir "El valor de ",var_name," no puede ser negativo."
			SiNo
				Escribir "El valor de ",var_name," no puede ser inferior a ",min
			FinSi
			Escribir "Inténtelo nuevamente."
		FinSi
	Mientras Que num > max o num < min
Fin Funcion

Funcion edad <- obtener_edad
	Definir anio, edad Como Entero
	anio <- ingresar_validar("El año de nacimiento del conductor",2005,1920)
	edad <- 2020-anio
FinFuncion


Funcion uno_dos <- validar_unodos(uno_string, dos_string)
	Definir uno_dos Como Entero
	Repetir
		Escribir "Escriba 1 si ",uno_string
		Escribir "Escriba 2 si ",dos_string
		Escribir "Su opción: "
		Leer uno_dos
		Si uno_dos<>1 y uno_dos<>2
			Escribir "Opción inválida, solo se admiten los valores 1 o 2."
		FinSi
	Mientras Que uno_dos<>1 y uno_dos<>2
FinFuncion


Algoritmo ESTADISTICAS_ACCIDENTES
	
	Definir cdatos, edades, sexos, ciudades, i, cont0, cont1, cont2, cont3 Como Entero
	Definir p_ed, p_sx, p_ed2, p_ci Como Real
	cont0 <- 0
	cont1 <- 0
	cont2 <- 0
	cont3 <- 0
	
	cdatos <- ingresar_validar("La cantidad de datos que desea procesar", 1000000, 0)
	
	Dimension edades[cdatos]
	Dimension sexos[cdatos]
	Dimension ciudades[cdatos]
	
	Para i<-0 Hasta cdatos-1 Con Paso 1 Hacer
		Limpiar Pantalla
		Escribir "[INGRESANDO DATOS DE CONDUCTOR ",i+1,"]"
		edades[i] <- obtener_edad()
		sexos[i] <- validar_unodos("el sexo del conductor es masculino","el sexo del conductor es femenino")
		ciudades[i] <- validar_unodos("la ciudad de registro del carro es Lima", "la ciudad de registro del carro es otra")
	Fin Para
	
	Para i<-0 Hasta cdatos-1 Con Paso 1 Hacer
		Si edades[i] < 25
			cont0 <- cont0+1
		FinSi
	Fin Para
	p_ed <- (cont0/cdatos)*100
	
	Para i<-0 Hasta cdatos-1 Con Paso 1 Hacer
		Si sexos[i] = 2
			cont1 <- cont1+1
		FinSi
	Fin Para
	p_sx <- (cont1/cdatos)*100
	
	Para i<-0 Hasta cdatos-1 Con Paso 1 Hacer
		Si sexos[i] =1 y edades[i] >= 15 y edades[i] <= 30
			cont2 <- cont2+1
		FinSi
	Fin Para
	p_ed2 <- (cont2/cdatos)*100
	
	Para i<-0 Hasta cdatos-1 Con Paso 1 Hacer
		Si ciudades[i] = 2
			cont3 <- cont3+1
		FinSi
	Fin Para
	p_ci <- (cont3/cdatos)*100
	
	Limpiar Pantalla
	Escribir "[ESTADÍSTICAS FINALES]"
	Escribir ""
	Escribir "El ",p_ed,"% de conductores tiene menos de 25 años."
	Escribir "(",cont0," de ",cdatos,")"
	Escribir ""
	Escribir "El ",p_ed,"% de conductores es de sexo femenino."
	Escribir "(",cont1," de ",cdatos,")"
	Escribir ""
	Escribir "El ",p_ed,"% de conductores es de sexo masculino y tiene entre 15 y 30 años."
	Escribir "(",cont2," de ",cdatos,")"
	Escribir ""
	Escribir "El ",p_ed,"% de conductores registró su carro fuera de Lima."
	Escribir "(",cont3," de ",cdatos,")"
	Escribir ""
	
FinAlgoritmo
