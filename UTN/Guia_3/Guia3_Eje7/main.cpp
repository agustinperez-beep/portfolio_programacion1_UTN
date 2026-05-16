#include <iostream>

using namespace std;



    /*7. Hacer un programa para ingresar una lista de números que finaliza cuando se
    ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
    Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.*/


int main()
{
    int Num = 1;
    int numPos = 0, numNeg = 0;
    while (Num != 0){
        cout <<"Ingrese un numero: ";
        cin >> Num;

        if (Num > 0){
            numPos = numPos+1;

        } else{
            if (Num < 0)
                numNeg = numNeg+1;
                }
    }
        cout<<"Cantidad de numeros positivos: "<<numPos<<endl;
        cout<<"Cantidad de numeros negativos: "<<numNeg<<endl;

    return 0;
}
