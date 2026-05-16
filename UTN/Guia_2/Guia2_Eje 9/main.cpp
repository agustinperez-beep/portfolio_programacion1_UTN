#include <iostream>

using namespace std;

int main()
{
    /*Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
    obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
    siguientes condiciones:  - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.  -
    “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.  -
    “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
    exámenes.  - “Recursa la materia”, si no aprobó ningún examen parcial.**/



    int n1, n2, n3, n4;

    int contPromociona = 0, contAprobados = 0;

    cout << "Ingrese la primer nota: ";
    cin >> n1;

    cout << "Ingrese la segunda nota: ";
    cin >> n2;

    cout << "Ingrese la tercer nota: ";
    cin >> n3;

    cout << "Ingrese la cuarta nota: ";
    cin >> n4;

    if (n1 >= 7)
    {
        contPromociona++;
        contAprobados++;

    }

    else
    {
        if (n1 >= 4)
            contAprobados++;
    }

    if (n2 >= 7)
    {
        contPromociona++;
        contAprobados++;
    }

    else
    {
        if (n2 >4)
            contAprobados++;
    }

    if (n3 >= 7)
    {
        contPromociona++;
        contAprobados++;
    }

    else
    {
        if (n3 >= 4)
            contAprobados++;
    }

    if (n4 >= 7)
    {
        contPromociona++;
        contAprobados++;
    }

    else
    {
        if (n4 >= 4)
            contAprobados++;
    }

    if (contPromociona == 4)
    {
        cout <<"El alumno promociona"<<endl;
    }
    else if (contAprobados >= 3)
    {
        cout << "El alumno debe rendir final"<<endl;
    }
    else if (contAprobados >= 1)
    {
        cout << "El alumno debe recuperar"<<endl;
    }
    else
    {
        cout << "El alumno debe recursar"<<endl;
    }


    return 0;
}
