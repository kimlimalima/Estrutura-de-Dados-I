#include <iostream>
using std::cout;

#include <string>
using std::string;

#include  "timeFutebol.h"

int main()
{
    timeFutebol paysandu;
    int vitorias = 10;
    int empates = 10;
    int derrotas = 0;
    
    paysandu = inicializar("Paysandu", "Márcio Fernandes", vitorias, empates, derrotas, 0, 0, 0);

    print(paysandu);
    totalPontosTime(&paysandu, vitorias, empates, 0, 0, 0);

    return 0;
}