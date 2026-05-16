#include <iostream>

using namespace std;

int main()
{
    /*Hacer un programa para ingresar por teclado la fecha de nacimiento de una
persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar
la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular
luego la edad en años de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en
diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir
los 19 años.*/

    int anioNacimiento, mesNacimiento, diaNacimiento;  //ingresamos los datos y les damos un tipo.
    int anioActual, mesActual, diaActual;
    int edad;

    cout << "Ingrese el anio de nacimiento: "<<endl; //Se ingresan los datos como datos individuales cada uno.
    cin >> anioNacimiento;
    cout << "Ingrese el mes de nacimiento: "<<endl;
    cin >> mesNacimiento;
    cout << "Ingrese el dia de nacimiento: "<<endl;
    cin >> diaNacimiento;


    cout << "Ingrese el anio actual: "<<endl;
    cin >> anioActual;
    cout << "Ingrese el mes actual: "<<endl;
    cin >> mesActual;
    cout << "Ingrese el dia actual: "<<endl;
    cin >> diaActual;

      edad = anioActual - anioNacimiento;  //realizamos el proceso.

        if (mesNacimiento > mesActual){
            edad = edad - 1;
        }
        else if (mesNacimiento == mesActual && diaNacimiento > diaActual){
            edad = edad - 1;
        }
        cout <<"La edad de la persona es: "<< edad <<endl; //Listamos el mensaje.




    return 0;
}
