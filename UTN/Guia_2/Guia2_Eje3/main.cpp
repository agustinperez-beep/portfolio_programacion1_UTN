#include <iostream>

using namespace std;

int main()
{
    int A, B, R;

    cout << "ingrese un numero: " << endl;
    cin >> A;

    cout << "ingrese otro numero: "<< endl;
    cin >> B;

    R = A % B;

        if (R == 0){
                cout << "el numero " << A << " es multiplo" <<endl;
        }

    else {
        cout << B << " no es multiplo"<<endl;
    }







    return 0;
}
