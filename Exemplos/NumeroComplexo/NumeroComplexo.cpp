#include <iostream>

using std::cout, std::endl;

#include "NumeroComplexo.h"

NumeroComplexo inicializar(int numeroReal, int numeroImaginario)
{
    NumeroComplexo numero;
    numero.numeroReal = numeroReal;
    numero.numeroImaginario = numeroImaginario;
    
    return numero;
}

void print(NumeroComplexo numero)
{
    cout << "Numero Real: " << numero.numeroReal << endl;
    cout << "Numero imaginário: " << numero.numeroImaginario;
}

void copy(NumeroComplexo* ponteiro, NumeroComplexo src)
{
    ponteiro->numeroReal = src.numeroReal;
    ponteiro->numeroImaginario = src.numeroImaginario;
}

NumeroComplexo soma(NumeroComplexo numeroA, NumeroComplexo numeroB)
{
    NumeroComplexo temp;
    temp.numeroReal = numeroA.numeroReal + numeroB.numeroReal;
    temp.numeroImaginario = numeroA.numeroImaginario + numeroB.numeroImaginario;

    return temp;

}

int ehReal(NumeroComplexo numero)
{
    return numero.numeroImaginario == 0;    
}