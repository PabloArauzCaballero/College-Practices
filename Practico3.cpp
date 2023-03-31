#include <iostream>
#include <math.h>
using namespace std;
void ejercicio1() {
    int acumulador = 0, numeroNDeseado;
    cout << "Ingrese la cantidad de numeros que desea sumar de forma sucesiva: ";
    cin >> numeroNDeseado;
    for (int i = 1; i <= numeroNDeseado; i++) {
        acumulador = acumulador + i;
    }
    cout << "Suma = " << acumulador << endl;
}
void ejercicio2() {
    int acumulador = 0, numeroNDeseado;
    cout << "Ingrese la cantidad de numeros que desea sumar de forma sucesiva (Impares): ";
    cin >> numeroNDeseado;
    for (int i = 1; i <= numeroNDeseado; i++) {
        if (i % 2 != 0) acumulador = acumulador + i;
    }
    cout << "Suma Impares = " << acumulador << endl;
}
void ejercicio3() {
    int acumulador = 0, numeroNDeseado;
    cout << "Ingrese la cantidad de numeros que desea sumar de forma sucesiva (Cuadrados): ";
    cin >> numeroNDeseado;
    for (int i = 1; i <= numeroNDeseado; i++) {
        acumulador = acumulador + pow(i,2);
    }
    cout << "Suma Cuadrados = " << acumulador << endl;
}
void ejercicio4() {
    int acumulador = 0, numeroNDeseado, factor = 1;
    cout << "Ingrese la cantidad de numeros que desea sumar de forma sucesiva (alternado de positivos y negativos): ";
    cin >> numeroNDeseado;
    for (int i = 1; i <= numeroNDeseado; i++) {
        cout << i * factor << endl;
        acumulador = acumulador + i*factor;
        factor = factor * (-1);
    }
    cout << "Suma Alternados = " << acumulador << endl;
}
void ejercicio5() {
    int acumulador = 1, numeroNDeseado;
    cout << "Ingrese el numero factorial: ";
    cin >> numeroNDeseado;
    for (int i = 1; i <= numeroNDeseado; i++) {
        acumulador = acumulador*i;
    }
    cout << "Numero Factorial = " << acumulador << endl;
}
void ejercicio6() {
    int acumulador = 0, base, numeroNDeseado;
    cout << "Ingrese el numero deseado: ";
    cin >> numeroNDeseado;
    cout << "Base Ingresada: ";
    cin >> base;
    for (int i = 1; i <= numeroNDeseado; i++) {
        acumulador = acumulador + pow(base, i);
    }
    cout << "Numero Factorial = " << acumulador << endl;
}
void main(){
    ejercicio4();
}
