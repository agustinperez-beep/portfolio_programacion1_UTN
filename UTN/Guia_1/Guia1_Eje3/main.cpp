#include <iostream>

using namespace std;

int main()
{
    /*Una concesionaria de autos paga a los vendedores un sueldo fijo de $500000
    más $70000 de premio por cada auto vendido. Hacer un programa que permita
    ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
    informar por pantalla el sueldo total a pagar.
    Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
    pagar es de $780000.*/


    int cantidadAutos, bono;

    float sueldoTotal;

    //agregar una variable constante nos permite realizar UNA sola modificacion en caso de requerirlo.
    const int VALOR_SUELDO = 500000;
    const int PREMIO = 70000;

    cout<<"Ingrese la cantidad de autos vendidos: "<<endl;
    cin>> cantidadAutos;

    bono = cantidadAutos * PREMIO;

    sueldoTotal = VALOR_SUELDO + bono;

    cout<<"El sueldo total a pagar es: "<<sueldoTotal<<endl;


    return 0;
}
