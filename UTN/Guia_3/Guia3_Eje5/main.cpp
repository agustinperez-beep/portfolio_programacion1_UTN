#include <iostream>

using namespace std;

int main()
{
    /*5. Hacer un programa para ingresar un N valor que indica la cantidad de números
    que componen una lista y luego solicitar se ingresen esos N números.
    Se pide informar cuantos son positivos.
    Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
    listará: Cantidad de Positivos: 4
    Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
    Se listará: Cantidad de Positivos: 0*/


    int n, numeros, X;
    int cantPos = 0;
    cout<<"Ingrese el numero de lista: ";
    cin>>n;

    for (X=0; X<n; X++){
        cout <<"Ingrese el numero "<< X + 1 <<": ";
        cin >>numeros;
    if (numeros >= 0){
           cantPos = cantPos + 1;

    }
    }
    cout << "Cantidad de numeros positivos: "<<cantPos;

    return 0;
}
