#include <iostream>
#include <string>

int quantidadeVogais(std::string cadeiaCaracteres)
{
    int quantidadeVogais = 0;

    for(int index=0; index<cadeiaCaracteres.length(); index++)
    {
        char caracter = cadeiaCaracteres[index];
        if (caracter == 'a' || caracter == 'e' || caracter =='i' || caracter =='o' || caracter =='u'){quantidadeVogais++;}
        if (caracter == 'A' || caracter == 'E' || caracter == 'I'|| caracter == 'O' || caracter == 'U'){quantidadeVogais++;}
    }
    return quantidadeVogais;
}


int main()
{
    std::cout << "Quantidade de vogais: " << quantidadeVogais("KimiA") << "\n";
    return 0;
}
