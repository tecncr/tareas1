Funcion serie(num)
	
    Definir denom, a Como Entero
	
    Para a<-1 Hasta num Con Paso 1
        denom<-(a*(a+1)/2)*4
        Escribir Sin Saltar "1/", denom ","
    FinPara
	
	Escribir Sin Saltar " fin de la serie."
	Escribir ""
	
FinFuncion


Algoritmo IMPRIMIR_SERIE
	
    Definir n Como Entero
	
	Escribir "Programa que resuelve la serie 1/4, 1/12, 1/24, 1/40, 1/60, ..."
    Escribir "Ingrese la cantidad de términos que desee"
    Leer n
	
    Escribir "Los términos de la serie son: "
    serie(n)
	
FinAlgoritmo