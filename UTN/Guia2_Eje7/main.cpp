#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar cuatro números y listar el máximo de ellos

    int A, B, C, D;

    //Utilizo la variable m para reutilizar un valor y realizar una COMPARACION.
    int m;

    cout << "Ingrese un numero: "<<endl;
    cin >> A;

    cout << "Ingrese otro un numero: "<<endl;
    cin >> B;

    cout << "Ingrese otro un numero: "<<endl;
    cin >> C;

    cout << "Ingrese otro un numero: "<<endl;
    cin >> D;


    m = A;

    if (B > m){

        m = B;

    }

    if (C > m){

        m = C;
    }

    if (D > m){

        m = D;
    }

        cout <<"El numero maximo es: "<<m<<endl;

    return 0;
}
