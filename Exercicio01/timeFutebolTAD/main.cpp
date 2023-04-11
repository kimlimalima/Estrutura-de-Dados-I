#include <iostream>
using std::cout;

#include <string>
using std::string;

#include  "timeFutebol.h"

int main()
{
    timeFutebol paysandu;
    
    paysandu = inicializar("Paysandu", "Márcio Fernandes", 1000*1000, 0, 0);

    print(paysandu);

    return 0;
}