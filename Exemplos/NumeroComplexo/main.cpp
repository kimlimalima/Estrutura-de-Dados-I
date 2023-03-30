#include <iostream>

using std::cout;

#include "NumeroComplexo.h"
// #include "NumeroComplexo.cpp"

int main()
{
    NumeroComplexo numeroA;
    numeroA = inicializar(2,5);

    cout << "Numero: ";
    print(numeroA);
    cout << "\n";

    return 0;
}