#include <iostream>
##include <iostream>
#include <string>
using namespace std;
void ejercicio1() {
    /*
    1.	Dado un número entero N, hacer un programa para sumar los dígitos de
        cada uno de ellos.
    Ej. Si N= 45634,  la suma es 4+5+6+3+4=22
    */
    string numero;
    int acumulador = 0;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    while (acumulador > 10) {
        for (int i = 0; i < numero.size() - 1; i++) {
            acumulador = acumulador + stoi(numero.substr(i, i + 1));
        }
        if (acumulador > 10) {
            acumulador = 0;
            numero = to_string(acumulador);
        }
    }
    cout << "Suma de dígitos hasta que sea menor que diez = " << acumulador << endl;
}
void ejercicio2() {
    /*
     * 2.Dado un número entero N, hacer un programa para invertir el
        número en otra variable Z.
        Ej. Si N= 456721, el número invertido es Z=127654.
    */
    string numero, numeroInvertido = "";
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    cout<<"Tamaño : " << numero.size() << endl;
    for (int i = numero.size()-1; i >= 0; i--) {
        numeroInvertido = numeroInvertido + numero.substr(i, i);
        cout<< "Caracter "<< i << " : " << numero.substr(i, i) << endl;
    }
    cout << "Numero Invertido Z = " << numeroInvertido << endl;
}
void ejercicio3() {
    /*
    * 3.	Hacer un programa para contar los dígitos
    *       pares que tiene un número N.
    * Ej. Si N= 5678312,  este tiene 3 dígitos pares (6, 8, 2).
    */
    string numero;
    int contador = 0;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    for (int i = 0; i < numero.size() - 1; i++)
        if (stoi(numero.substr(i, i + 1)) % 2 == 0)
            contador = contador + 1;
    cout << "La cantidad de elementos pares son : " << contador << endl;

}
void ejercicio4() {
    /*
    * 4.	Dado un número entero, comprobar si el número es capicúa,
            es decir, si leídos de la izquierda a la derecha y viceversa dan
            el mismo valor o número.  Ej. 34543
    */
    string numero, numeroInvertido = "";
    int numeroN,tamano;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    numeroN = stoi(numeroInvertido);
    tamano = numero.size() - 1;
    for (int i = tamano; i > 0; i-=1) {
        numeroInvertido = numeroInvertido + numero.substr(i, i - 1);
    }
    cout << "Numero Invertido Z = " << numeroInvertido << endl;
    if (numeroN == stoi(numeroInvertido))
        cout << "Conclusión: Es capicua." << endl;
    else
        cout << "Conclusión: No es capicua" << endl;
}
void ejercicio5() {
    /*
    *   5.Hallar el complemento a 9 de un número entero N.
    *    Ej. 4567, su complemento es 5432.
    */
    string numero, acumulador = "";
    int variableUtilitaria;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    for (int i = 0; i < numero.size(); i++) acumulador = acumulador + "9";
    cout << "Numero complementario : " << stoi(acumulador)-stoi(numero) << endl;
}
void ejercicio6() {
    /*6.	Dado un número entero en base 8, comprobar si alguno de sus dígitos
            no corresponden a su base.
        Ej. El número 2762823, el dígito 8 no corresponde a la base
    */
    string numero, strComparinson;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    for (int i = 0; i < numero.size() - 1; i++) {
        strComparinson = numero.substr(i, i + 1);
        if (strComparinson.compare("8") || strComparinson.compare("9")) {
            cout << "El numero " << numero << " NO corresponde a la base 8." << endl;
            return;
        }
    }
    cout << "El numero " << numero << " corresponde a la base 8." << endl;
}
int main() {
    ejercicio2();
}
