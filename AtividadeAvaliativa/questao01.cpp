#include <iostream>
#include <string>

int quantidadeVogais(char cadeiaCaracteres)
{
    int quantidadeVogais = 0;

    for(int index=0; index<cadeiaCaracteres.length(); index++)
    {
        char letra = cadeiaCaracteres[index];
        if (letra == 'a' || letra == 'e' || letra =='i' || letra =='o' || letra =='u'){quantidadeVogais++;}
        if (letra == 'A' || letra == 'E' || letra == 'I'|| letra == 'O' || letra == 'U'){quantidadeVogais++;}
    }
    return quantidadeVogais;
}


int main()
{
    std::cout << "Quantidade de vogais: " << quantidadeVogais("KimiA") << "\n";
    return 0;
}
