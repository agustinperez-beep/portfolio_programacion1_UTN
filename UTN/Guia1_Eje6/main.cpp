#include <iostream>

using namespace std;

int main()
{
    /*Hacer un programa para ingresar por teclado el importe de una venta y el
    porcentaje de descuento aplicada a la misma y luego informar por pantalla el
    importe a pagar.
    Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
    el total a pagar será de $1020.
    Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
    total a pagar será de $800.*/


    //Opcion A). Usamos el tipo Float para calcular el porcentaje, y la division por 100
    //nos aseguramos que sea un decimal para que calcule y/o conpile correctamente.

    int importeVenta, descuento;
    int importeFinal;
    float porcentajeDescuento;

    cout << "Ingrese un importe: "<<endl;
    cin >> importeVenta;

    cout << "Ingrese el descuento a aplicar: "<<endl;
    cin >> descuento;

    porcentajeDescuento = importeVenta * (descuento/100.0);

    importeFinal = importeVenta - porcentajeDescuento;

    cout << "El importe a pagar es de: "<<importeFinal<<endl;




    //Opcion B). Cambiamos de lugar los () y nos aseguramos que el calculo funciona
    //sin necesidad de cambiar el tipo de variable.

    int importeVenta, descuento, porcentajeDescuento;
    int importeFinal;


    cout << "Ingrese un importe: "<<endl;
    cin >> importeVenta;

    cout << "Ingrese el descuento a aplicar: "<<endl;
    cin >> descuento;

    porcentajeDescuento = (importeVenta * descuento) /100;

    importeFinal = importeVenta - porcentajeDescuento;

    cout << "El importe a pagar es de: "<<importeFinal<<endl;



    return 0;
}
