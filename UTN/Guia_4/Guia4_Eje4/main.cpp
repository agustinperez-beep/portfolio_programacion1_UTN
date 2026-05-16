#include <iostream>

using namespace std;

int main()
{
    /*4 Dada una lista de números compuesta por 10 grupos y cada grupo separado del
    siguiente por un cero, se pide determinar e informar:
    a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por cada grupo.
    b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se informan 2 resultados por cada grupo.
    c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.
    d) El número de grupo con mayor porcentaje de números impares positivos  respecto al total de números que forman el grupo. Se informa 1 resultado al final.
    e) Informar cuantos grupos están formados por todos números ordenados de
    mayor a menor. Se informa 1 resultado al final.*/



    int MaxPar, MaxImpar;
    float PorcNeg, PorcPos;
    int MaxNumImparPos = -1;
    int PorcActNum = 0;
    int ContPosTotal =0;
    int GrupGanador =0;
    int CantOrdenados =0;
    int Num;
    bool HayMaxPar, HayMaxImpar;

    for (int X = 0; X < 10; X ++)
    {

        cout<< "Ingrese un numero: ";
        cin>> Num;

        HayMaxPar = false;
        HayMaxImpar = false;


        while (Num != 0)
        { int EsPos = 0, EsNeg = 0;

            if (Num%2 == 0)
            {

                if (HayMaxPar)
                {

                    if (Num > MaxPar)
                    {

                        MaxPar = Num;
                        HayMaxPar = true;
                    }
                }
            }

            else if (HayMaxImpar)
            {

                if (Num > MaxImpar)
                {

                    MaxImpar = Num;
                    HayMaxImpar = true;
                }
            }


            if (Num > 0){
                EsPos++;
                ContPosTotal++;
            }
        }
    }





    return 0;
}
