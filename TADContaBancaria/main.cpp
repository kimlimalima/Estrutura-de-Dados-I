#include <iostream>
#include <string>
#include "contaBancaria.h"

using namespace std;

int main(){
    contaBancaria conta;
    conta = inicializa(10,10000);
    cout << "Antes da movimentação " << endl;
    print(conta);

    cout << "Antes do deposito" << endl;
    deposito(&conta, 50);
    print(conta);

    saque(&conta, 100);
    cout << "Depois da movimentação" << endl;
    print(conta);
    return 0;
}