#include <iostream>

using namespace std;

int main()
{
    /*2 Hacer un programa para ingresar una lista de números que finaliza cuando se
    ingresan dos números consecutivos iguales y luego informar el máximo.
    Cuando se ingresa el número repetido el mismo debe ser descartado.
    Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listará Máximo 35. En este
    caso el segundo número 22 no se analiza, solo sirve para finalizar el ingreso.
    Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, 63, 63. Se listará Máximo 63. En este caso
    el segundo número 63 no se analiza, solo sirve para finalizar el ingreso*/


    int num, numMax, numAnt;
    bool primerNum = true;

      cout<< "Ingrese un numero: ";
      cin>>num;

    while (num != numAnt)
    {
        if (primerNum)
        {
            numMax = num;
            primerNum = false;
        }
        else

         if ( num > numMax)
         {
           numMax = num;

         }
         numAnt = num;

         cout<< "Ingrese un numero: ";
         cin>>num;

    }

    cout<<"El numero maximo fue: "<<numMax<<endl;













    return 0;
}
