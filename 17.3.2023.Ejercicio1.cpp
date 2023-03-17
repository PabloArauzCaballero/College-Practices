#include <iostream>
#include <string>
using namespace std;
string specialist(int edad) {
    if (edad >= 18) {
        return "Puede votar";
    }
    else {
        return "No puede votar";
    }
}
void main(){
    int edad; // Declaración variables de edad
    cout << "Ingrese la edad: ";  // Aclaración de información de entrada
    cin >> edad; // Lectura de información por teclado (consola)
    if (edad >= 18) { 
        cout << "Puede votar"<<endl;
    }
    else {
        cout << "No puede votar"<<endl;
    }
    cout << specialist(edad)<<endl;
}