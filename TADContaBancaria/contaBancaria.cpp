#include <iostream>
#include "contaBancaria.h"

using std::cout;

contaBancaria inicializa (int numeroConta, double saldoConta)
{
    contaBancaria conta;
    conta.numeroConta = numeroConta;
    conta.saldoConta = saldoConta;
    return conta;
}

void deposito(contaBancaria *conta, double valor)
{

    conta->saldoConta += valor;

}
void saque(contaBancaria *conta, double valor)
{

    conta->saldoConta -= valor;

}
void print(contaBancaria conta)
{
    cout << "Numero da conta: " << conta.numeroConta << "Saldo atual em R$: " << conta.saldoConta << "\n";
}