#include <iostream>

using namespace std;

int main()
{
    /*3. Hacer un programa para que el usuario ingrese un número positivo y luego se
    muestren por pantalla los números entre el 1 y el número ingresado por el
    usuario.
    Ejemplo: Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.*/


    /*int x, n;
    cout<<"Ingrese un numero: ";
    cin >>n;

    for (x=1; x<=n; x++){
            cout<<x<<endl;
    }*/


    int n=1, Num;
    cout<<"Ingrese un numero: ";
    cin >>Num;

    while (n<=Num){

        cout<<n<<endl;
        n++;
    }




    return 0;
}
