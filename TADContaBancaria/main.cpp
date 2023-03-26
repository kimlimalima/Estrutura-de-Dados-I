#include <iostream>
#include <string>
#include "contaBancaria.h"

using namespace std;

int main(){
    contaBancaria conta;
    conta = inicializa(10,10000);
    cout << "Antes da movimentação " << endl;

    return 0;
}