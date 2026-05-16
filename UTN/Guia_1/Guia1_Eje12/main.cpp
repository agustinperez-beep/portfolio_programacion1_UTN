#include <iostream>

using namespace std;

int main()
{
    /*Ingresar el largo, el ancho y la profundidad de una pileta rectangular y calcular
su volumen en litros y la cantidad de horas necesarias para llenarla dado un
caudal en litros/minuto que también se ingresa.
Datos de entrada
Pileta de 10 mts de largo x 4 mts de ancho x 2 mts de profundidad y un caudal
de llenado de 500 lts por minuto.
Análisis
Pileta → 10 mts x 4 mts x 2 mts → Volumen: 80 mts cúbicos → 80000 litros
Caudal llenado → 500 lts/minuto
Tiempo para llenado completo: 2.66 hs*/


    int largo, ancho, profundidad, caudal;
    int  cantidadHoras;
    float horas, minutos, volumenM3, volumenLitros;

    cout << "Ingrese el largo de la pileta: ";
    cin >> largo;
    cout << "Ingrese el ancho: ";
    cin >> ancho;
    cout << "Ingrese la profundidad: ";
    cin >> profundidad;
    cout << "El caudal es: ";
    cin >> caudal;

    volumenM3 = largo * ancho * profundidad;
    volumenLitros = volumenM3 * 1000;                      //concatenar varios procesos seria lo mas optimo.


    minutos = volumenLitros / caudal;
    horas = minutos / 60;


    cout << "El volumen de la pileta es de: " <<volumenM3<<"mts"<<endl;
    cout << "El tiempo de llenado es de: " <<horas<<endl;




    return 0;
}
