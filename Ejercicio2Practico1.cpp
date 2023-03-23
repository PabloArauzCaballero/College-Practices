/*
* 2.	Calcular la circunferencia, el área y el volumen de una esfera, si se conoce como dato el diámetro D.
*   ENTRADA: Diametro
*   SALIDA: Area y Volumen
*/
#include <iostream>
#include <math.h>
#define PI 3.151592
using namespace std;

int main(){
    float diametro;
    cout << "Ingrese el diametro (cm): ";
    cin >> diametro;
    cout << "Area (Circulo) = "<<PI*pow(diametro/2,2)<<endl;
    cout << "Volumen (Esfera) = " << 4 / 3 * PI*pow(diametro/2,3)<<endl;
}