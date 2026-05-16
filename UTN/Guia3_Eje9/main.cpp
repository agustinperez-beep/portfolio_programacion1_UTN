#include <iostream>

using namespace std;

int main()
{
    /*9. Hacer un programa para ingresar una lista de 10 números, luego informar el
    máximo.
    Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
    Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
    Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6.
    El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
    máximo es un positivo.*/



    int x, num, max = 0;

    for (x=0; x<10; x++){

        cout<< "ingrese el numero "<< x + 1<<": ";
        cin>>num;
        if (x==0){
            max = num;
        }
        else {
            if (num > max)
            max = num;
        }
    }
        cout<<"El maximo es: "<<max<<endl;

    return 0;
}
