#include <iostream>

using std::cout, std::endl;

int main()
{
    // Write C++ code here
    int a = 20;
    // criando variávle que irá receber o endereço de memória de outra variável
    int* c;
    cout << "Antes de receber o enderço de a: " << c << endl;

    // inserindo em c o endereço de a
    c = &a;
    cout << "Valor inicial de a: " << a << endl;
    cout << "Depois de receber o endereço de a: "<< c << endl;
    
    // modificando o dado armazendado em a através do ponteiro
    (*c) = 30;
    
    cout << "Valor modificado de a: " << a << endl;
    cout << "Estado atual de c: " << c << endl;
    
    return 0;
}
