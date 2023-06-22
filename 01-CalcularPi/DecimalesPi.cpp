#include <iostream>
#include <stdio.h>
#include <cmath> 
#include <iomanip>

using namespace std;

long double pi() {
    long double pi = 0;
    for (long int i = 0; i < 10000000; i++) {
        //pow(-1, i) devuelve -1 si i es impar, y 1 si i es par.
        pi += pow(-1, i) / (2 * i + 1);
    }

    //Multiplicamos por 4 para obtener pi, ya que originalmente la serie converge 
    //en pi/4 por lo que multiplicando por 4 se simplifica el denominador.
    return pi * 4;
}

 
int main() {
    //ACLARACION: Mientras mas grande sea el numero de terminos, mas preciso sera el resultado. 
    //Ej: si se suman 10^6 terminos y se asigna una presicion de 7, se obtienen 6 decimales de pi. 
    //El parametro de la funcion setprecision() indica la cantidad de decimales que se muestran. Debe ser n°terminos+1.

    cout << "Pi con " << "6" << " terminos es: " << setprecision(7) << pi() << endl;

    return 0;
}
