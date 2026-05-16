#include <iostream>

using namespace std;

int main()
{
    /*1 Hacer un programa para ingresar una lista de 10 números y luego informar
    cuántos de los números ingresados son perfectos. Se informa 1 resultado al
    final. Recordamos que un número es perfecto cuando la suma de sus divisores,
    exceptuando al número en sí mismo, coinciden.
    Ejemplo A: el 6 es perfecto ya que la suma de sus divisores es 1+2+3 = 6
    Ejemplo B: el 28 es perfecto ya que la suma de sus divisores es
    1+2+4+7+14=28*/


    int cantPerfectos = 0;  //Se inicia cantPerfectos una sola vez fuera del ciclo, ya que se usa una sola vez dentro del segundo IF dentro del FOR externo.
    int numero;
    for(int x=0; x<10; x++)
    {

        cout<<"Ingrese un numero: "<<endl;
        cin>> numero;

        int contPerfectos = 0; //Se inicia en 0 dentro del FOR externo para que cada iteracion re reinicie y vuelva a contar el siguiente ingreso.

            for(int i=1; i<numero; i++)
        {
            if (numero%i==0)

             cout<<"El numero: "<<i<<" es divisor"<<endl;

            {contPerfectos+=i;

            }

        }
        if (numero==contPerfectos)

            {cantPerfectos++;

            }

    }
        cout<<"la cantidad de numeros perfectos es: "<<endl<<cantPerfectos;

    return 0;
}
