#include <iostream>

using namespace std;

int main()
{
        /*Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
        programa para ingresar por teclado la cantidad de alfajores vendidos de cada
        una de las tres marcas y luego se informe el porcentaje de ventas para cada
        una de ellas.
        Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
        programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.*/


        int alfajor1, alfajor2, alfajor3, totalVenta;
        float porcentaje1, porcentaje2, porcentaje3;

        cout << "Ingrese la cantidad vendida de los alfajores: "<<endl<<endl;

        cout <<"Alfajor1: "<<endl;
        cin >> alfajor1;

        cout <<"Alfajor2: "<<endl;
        cin >> alfajor2;

        cout <<"Alfajor3: "<<endl;
        cin >> alfajor3;

        totalVenta = alfajor1 + alfajor2 + alfajor3;

        porcentaje1 = alfajor1 * 100 / totalVenta;

        cout << "El porcentaje de alfajor1 fue de: "<<porcentaje1<<"%"<<endl;


        porcentaje2 = alfajor2 * 100 / totalVenta;

        cout << "El porcentaje de alfajor2 fue de: "<<porcentaje2<<"%"<<endl;

        porcentaje3 = alfajor3 * 100 / totalVenta;

        cout << "El porcentaje de alfajor3 fue de: "<<porcentaje3<<"%"<<endl;


        /*Declaro las variables de tipo Enteras (INT) y luego las de tipo decimal(FLOAT)
        luego realizo las cuentas pertinentes para calcular la cantidad total vendida de los alfajores
        y luego buscar el porcentaje de forma individual.*/



    return 0;
}
