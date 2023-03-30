#include <iostream>

using std::cout;

#include "NumeroComplexo.h"


int main()
{
    NumeroComplexo numeroA, numeroB, numeroC, numeroD;
    numeroA = inicializar(2,5);
    numeroB = inicializar(1,2);
    numeroC = soma(numeroA, numeroB);
    numeroD = inicializar(2,5);
    
    cout << "Numero A = ";
    print(numeroA);
    cout << "\n";

    cout << "Numero B = ";
    print(numeroB);
    cout << "\n";

    cout << "Numero C = ";
    print(numeroC);
    cout << "\n";

    cout << "Numero D = ";
    print(numeroD);
    cout << "\n";

    if(ehReal == 0)
    {
        copy(&numeroD, numeroA);
        cout << "Numero D = ";
        print(numeroD);
    }

    return 0;
}