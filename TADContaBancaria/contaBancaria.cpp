#include <iostream>
#include "contaBancaria.h"

using namespace std;

contaBancaria inicializa (int numeroConta, double saldoConta){
    contaBancaria conta;
    conta.numeroConta = numeroConta;
    conta.saldoConta = saldoConta;
    return conta;
}
