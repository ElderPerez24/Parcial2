Algoritmo calcular_potencia
	Definir base, exponente, resultado Como Entero

    Escribir "Ingrese la base: ";
    Leer base;
    Escribir "Ingrese el exponente: ";
    Leer exponente;
	
	Funcion ^(base, exponente) Devolver Entero
		Definir resultado como Entero
		resultado <- 1;
		
	Para i<-1 Hasta e Con Paso 1 Hacer
		resultado  <- resultado * base;
	Fin Para

    Escribir "El resultado de ", base," elevado a ",exponente," es: ", resultado;
FinAlgoritmo
