#include <iostream>

using namespace std;

int main()
{
    /*Hacer un programa que solicite por teclado que se ingresen dos números y
     luego guardarlos en dos variables distintas. A continuación se deben
     intercambiar mutuamente los valores en ambas variables y mostrarlos por
     pantalla.
     Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
     usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.*/

    int A, B, Aux;

    cout<<"Ingrese Variable UNO: "<<endl;
    cin >> A;

    cout<<"Ingreso Variable DOS 2: "<<endl;
    cin>> B;

    Aux = A;
    A = B;
    B = Aux;


    cout<<"Variable 1: "<<A<<endl;
    cout<<"Variable 2: "<<B<<endl;


    /*Ejercicio de intercambio de valores o swap, utilizo una variable Auxiliar o Aux, para resguardar el valor de A,
    luego continuamos con el intercambio*/

    // \n sirve para realizar un salto de linea.


    return 0;
}
