#include <iostream>
#include <stdio.h>
#include <cmath> 
#include <iomanip>

using namespace std;

//Funcion que calcula los 6 primeros decimales de pi utilizando la serie de Leibniz, sin usar optimizaciones.
//La serie de Leibniz es: pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...
//La serie de Leibniz converge a pi/4, por lo que multiplicando por 4 obtenemos pi. 
//La serie converge mas rapido cuanto mas grande es el numero de terminos que se suman. 
//Por lo tanto, para obtener los 6 primeros decimales de pi, necesitamos sumar al menos 10^6 terminos.
//La funcion recibe como parametro la cantidad de terminos que se suman.

double pi(int n) {
    double pi = 0;
    for (int i = 0; i < n; i++) {

        //pow(-1, i) devuelve -1 si i es impar, y 1 si i es par.
        pi += pow(-1, i) / (2 * i + 1);
    }

    //Multiplicamos por 4 para obtener pi, ya que originalmente la serie converge en pi/4 por lo que multiplicando por 4 se simplifica el denominador.
    return pi * 4;
}

 
int main() {
    //ACLARACION: Mientras mas grande sea el numero de terminos, mas preciso sera el resultado. 
    //Ej: si se suman 10^6 terminos, se obtienen 6 decimales de pi. 
    //El parametro p de la funcion setprecision() indica la cantidad de decimales que se muestran. Debe coincidir con la cantidad 
    //de decimales que se desean mostrar.

    int n;
    int p;
    
    cout << "Ingrese la cantidad de terminos que se sumaran para calcular pi: ";
    cin >> n;

    cout << "Ingrese la cantidad de decimales que desea mostrar: ";
    cin >> p;

    cout << "Pi con " << n << " terminos es: " << setprecision(p) << pi(n) << endl;

    return 0;
}