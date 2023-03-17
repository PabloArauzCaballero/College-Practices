#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numeroEspacios, longitudNombre, longitudConstanteCadena; // Declaración de variables tipo numérico
	string nombre, lineaCentral,
		asterisco = "**************************************************", 
		miNombreEsCadena="Mi nombre es "; // Declaración de variables 
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	longitudNombre = nombre.length();
	longitudConstanteCadena = miNombreEsCadena.length();
	if ((longitudNombre+longitudConstanteCadena)% 2 != 0) {
		asterisco = asterisco + "*";
	}
	numeroEspacios = (asterisco.length() - longitudNombre-longitudConstanteCadena) / 2.0 - 1;
	lineaCentral = "*";
	for (int i = 0; i < numeroEspacios; i++) {
		lineaCentral = lineaCentral + " ";
	}
	lineaCentral = lineaCentral + miNombreEsCadena + nombre;
	for (int i = 0; i < numeroEspacios; i++) {
		lineaCentral = lineaCentral + " ";
	}
	lineaCentral = lineaCentral + "*";
	cout << asterisco << endl;
	cout << lineaCentral << endl;
	cout << asterisco << endl;
}
/*
*   ENTRADA: Nombre
*   SALIDA: Texto de asteristos con nombre centrado
*			**************************************************
*			*    Mi nombre es Pablo    *   
*			**************************************************
*			(Si la longitud del texto es impar, el numero de asteriscos debe ser impar)
*			***************
*			*    Pablo_    *  (Si el numero de asteriscos es par, el numero de asteriscos debes er par)
*   ALGORITMO
*       Flotantante numeroDeEspacios;
*       Cadena Nombre, Asteristos, MiNombreCadena;
*       Leer Nombre;
*		Si longitud%2 != 0:
*			Asteriscos = Asteriscos+"*";
*       numeroDeEspacios = (Asteriscos.longitud()-nombre.longitud())/2.0-1
* 
*/
