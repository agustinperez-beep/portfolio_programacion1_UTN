#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    //por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    //el sueldo que le corresponda.

    int Horas, Sueldo, valorHora;
    cout << "Ingrese la cantidad de horas trabajadas: "<<endl;
    cin >> Horas;
    cout<< "Ingrese el valor por hora: "<<endl;
    cin>>valorHora;

    Sueldo = Horas * valorHora;

    cout<< "El sueldo total a pagar es: "<< Sueldo<<endl;



   /*Este ejercicio expresa de forma sencilla el ingreso de la cantidad de horas de una persona
   y luego se calcula el valor por hora trabajada. Esto expresa la cantidad que gana dicho trabajador*/



    return 0;
}
