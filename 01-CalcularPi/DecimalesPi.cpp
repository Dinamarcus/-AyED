#include <iostream>
#include <iomanip>

using namespace std;

//Esta funcion cicla mientras el término (termino) 
//sea menor que 1e-6 (que vendria a ser igual a 10000000), 
//lo que corresponde a una precisión de 6 decimales.
double calcularPi() {
    double pi = 0.0;
    double termino = 1.0;
    int denominador = 1;
    int contador = 0;
    
    //alterna entre la suma y resta de terminos a 
    //la variable pi mientras se cumpla la condicion dada
    while (termino >= 1e-7) {
        if (contador % 2 == 0) {
            pi += termino;
        } else {
            pi -= termino;
        }

        denominador += 2;
        termino = 1.0 / denominador;
        contador++;
    }

    return pi * 4;
}

int main() {
    //Utilizo setprecision y fixed para que el valor que sale por
    //consola sea representado con exactamente la cantidad de 
    //decimales indicados en la precision
    
    cout << setprecision(6) << fixed;
    cout << "Pi: " << calcularPi() << endl;
    
    return 0;
}
