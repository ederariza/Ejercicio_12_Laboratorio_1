/*
Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N5.
Ej: si se ingresa 3 se debe imprimir:
3^1=3
3^2=9
3^3=27
3^4=81
3^5=243
*/

#include <iostream>
using namespace std;

int main(){

    int numero_N;
    cout << "Ingrese el numero N: ";
    cin >> numero_N;
    cout << "Multiplos del " << numero_N << " menores que 100 :" << endl;

    int potencia = 1;
    for(int i=1; i<=5; i++){
        potencia *= numero_N;
        cout << numero_N << "^" << i << "=" << potencia << endl;
    }

    return 0;
}
