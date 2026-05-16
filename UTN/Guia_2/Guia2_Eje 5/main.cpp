#include <iostream>

using namespace std;

int main()
{
    //Un negocio de perfumería efectúa descuentos según el importe de la venta.
    //Si el importe es menor a $100 aplicar un descuento del 5% (0,95)
    //Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% (0,90)
    //Si el importe es mayor a $500 aplicar un descuento del 15% (0,85)
    //Hacer un programa donde se ingresa el importe original sin descuento y se
    //informe por pantalla el importe con el descuento ya aplicado.
    //Importante: Verifique que el programa emita UN SOLO CARTEL.



    float importeOriginal, importeFinal;

    cout<<"Ingrese el monto a pagar"<<endl;

    cin >>importeOriginal;

        if (importeOriginal > 500)
            { importeFinal = importeOriginal * 0.85;

            cout << "El importe a pagar es: " << importeFinal <<endl;


        }
        else if (importeOriginal < 100)
        {
            importeFinal = importeOriginal * 0.95;

            cout << "El importe a pagar es: " << importeFinal <<endl;
        }
            else  {
                importeFinal = importeOriginal * 0.90;

                    cout << "El monto a pagar es: " << importeFinal <<endl;
                            }


    return 0;
}
