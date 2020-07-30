Algoritmo calculadoraIGV
	Definir pUnit, cant, igv, mParcial, mTotal Como Real
	Escribir "Programa que calcula el monto parcial y total de la compra de un producto."
	Escribir "Ingrese el precio unitario del producto: "
	Leer pUnit
	Escribir "Ingrese la cantidad de unidades del producto que se venderá: "
	Leer cant
	mParcial <- pUnit * cant
	igv <- 0.19 * mParcial
	mTotal <- mParcial + igv
	Escribir "El monto parcial de la compra es: S/ ",mParcial
	Escribir "El IGV es: S/ ",igv
	Escribir "El monto total de la compra es: S/ ", mTotal
FinAlgoritmo