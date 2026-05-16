#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    //por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    //el sueldo que le corresponda.

    int Horas;

    //Sueldo y Valor de las horas debe ser Float ya que se trata de una moneda.
    float Sueldo, valorHora;
    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> Horas;
    cout<< "Ingrese el valor por hora: $";
    cin>>valorHora;

    //Sueldo = Horas * valorHora;

    cout<< "El sueldo total a pagar es: "<< Horas * valorHora<<endl;



   /*Este ejercicio expresa de forma sencilla el ingreso de la cantidad de horas de una persona
   y luego se calcula el valor por hora trabajada. Esto expresa la cantidad que gana dicho trabajador*/



    return 0;
}
