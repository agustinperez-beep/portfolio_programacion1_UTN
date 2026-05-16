#include <iostream>

using namespace std;

int main()
{
    /*Hacer un programa para ingresar por teclado la cantidad de asientos totales en
    un avión y la cantidad de pasajes ocupados y luego calcular e informar el
    porcentaje de ocupación y el porcentaje de no ocupación del mismo.
    Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
    porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
    ocupación será de un 60%.*/

    int asientosTotales, pasajes, Libre;
    float porcentajeOcupado, porcentajeLibre;

    cout <<"Ingrese el total de asiestos: "<<endl;
    cin >>asientosTotales;

    cout <<"Informe la cantidad de pasajes ocupados: "<<endl;
    cin >>pasajes;

    Libre = asientosTotales - pasajes;

    porcentajeOcupado = pasajes * 100.0 / asientosTotales;

    cout << "Los asientos ocupados fueron el: %"<<porcentajeOcupado<<endl;

    porcentajeLibre = Libre * 100.0 / asientosTotales;

    cout << "La cantidad libre es de: %"<< porcentajeLibre<<endl;









    return 0;
}
