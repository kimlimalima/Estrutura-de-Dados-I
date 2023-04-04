#include <iostream>
#include <string>

using std::string;

#include "jogadorFutebol.h"

int main()
{
    jogadorFutebol neymar;

    neymar = inicializar("neymar", 90, 100, 150);

    print(neymar);

    return 0;
}