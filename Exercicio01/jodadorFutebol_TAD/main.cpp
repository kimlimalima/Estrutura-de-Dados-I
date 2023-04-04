#include <iostream>
#include <string>

using std::cout, std::string;

#include "jogadorFutebol.h"

int main()
{
    jogadorFutebol neymar;

    neymar = inicializar("Neymar", 90, 100, 150);

    atribuiGol(&neymar, 10);

    print(neymar);

    atribuiGol(&neymar, 10);

    print(neymar);
    return 0;
}